// Keenan's reference code
// Feel free to use (Enjoy)

#include "OpenGLWrapper.h"

#include "Camera.h"

// default constructor
 Camera :: Camera() 
{
};
	
// critical informational knobs for the perspective matrix
// Field of View Y is in degrees (copying lame OpenGL)

// copied the way OpenGL does its camera
void Camera::setPerspective(const float Fovy, const float Aspect, const float NearDist, const float FarDist)
{
    //proportionality of screen: aspect ratio = width/ height
	this->aspectRatio = Aspect;
    // angle
	this->fovy = Fovy;
    // distance from eye to near/far planes on screen
	this->nearDist = NearDist;
	this->farDist = FarDist;

};

// Just a pass through to setup the view port screen sub window
// just a wrapper to call glViewPort, passing in x, y height and width - subwindow within screen
void Camera::setViewport(const int inX, const int inY, const int width, const int height)
{
	this->viewport_x = inX;
	this->viewport_y = inY;
	this->viewport_width = width;
	this->viewport_height = height;

   this->privSetViewState();
};

// Simple wrapper
void Camera::privSetViewState( void )
{
	glViewport(this->viewport_x, this->viewport_y, this->viewport_width, this->viewport_height);
};


// Goal, calculate the near height / width, same for far plane 
void Camera::privCalcPlaneHeightWidth( void )
{

   this->near_height = 2.0f * tan(( this->fovy * MATH_PI/180.0f ) * .5f) * this->nearDist;
   this->near_width = this->near_height * this->aspectRatio;

   this->far_height = 2.0f * tan(( this->fovy * MATH_PI/180.0f) * .5f) * this->farDist;
   this->far_width = this->far_height * this->aspectRatio;

};

// what is camera looking at, its position, and Up vector (locks it in 3D space, since you can spin cam around)
void Camera::setOrientAndPosition(const Vect &inUp, const Vect &inLookAt, const Vect &inPos)
{
	// Remember the up, lookAt and right are unit, and are perpendicular.
	// Treat lookAt as king, find Right vect, then correct Up to insure perpendiculare.
	// Make sure that all vectors are unit vectors.

   // Point out of the screen into your EYE
   this->vDir = inPos - inLookAt;
	this->vDir.norm();

   // Clean up the vectors (Right hand rule)
	this->vRight = inUp.cross( this->vDir );
	this->vRight.norm();

    // up vector is not necessarily perpendicular at this point, could be a bit lazy in either direction
    // we know Right is correct, cross with vDir, to get corrected up
	this->vUp = this->vDir.cross( this->vRight );
	this->vUp.norm();

	this->vPos = inPos;

};


void Camera::privCalcFrustumVerts( void )
{
	// Top Left corner and so forth.  In this form to see the pattern
   // Might be confusing (remember the picture) vDir goes from screen into your EYE
   // so distance from the eye is "negative" vDir
	this->nearTopLeft		   = this->vPos - this->vDir * this->nearDist + this->vUp * this->near_height * 0.5f - this->vRight * this->near_width * 0.5f;
	this->nearTopRight		= this->vPos - this->vDir * this->nearDist + this->vUp * this->near_height * 0.5f + this->vRight * this->near_width * 0.5f;
	this->nearBottomLeft	   = this->vPos - this->vDir * this->nearDist - this->vUp * this->near_height * 0.5f - this->vRight * this->near_width * 0.5f;
	this->nearBottomRight	= this->vPos - this->vDir * this->nearDist - this->vUp * this->near_height * 0.5f + this->vRight * this->near_width * 0.5f;
	this->farTopLeft		   = this->vPos - this->vDir * this->farDist  + this->vUp * this->far_height * 0.5f  - this->vRight * this->far_width * 0.5f;
	this->farTopRight		   = this->vPos - this->vDir * this->farDist  + this->vUp * this->far_height * 0.5f  + this->vRight * this->far_width * 0.5f;
	this->farBottomLeft		= this->vPos - this->vDir * this->farDist  - this->vUp * this->far_height * 0.5f  - this->vRight * this->far_width * 0.5f;
	this->farBottomRight   	= this->vPos - this->vDir * this->farDist  - this->vUp * this->far_height * 0.5f  + this->vRight * this->far_width * 0.5f;
};
	
void Camera::privCalcFrustumCollisionNormals( void )
{
	// Normals of the frustum around nearTopLeft
	Vect A = this->nearBottomLeft - this->nearTopLeft;
	Vect B = this->nearTopRight - this->nearTopLeft;
	Vect C = this->farTopLeft - this->nearTopLeft;
	
	this->frontNorm = A.cross(B);
	this->frontNorm.norm();

	this->leftNorm = C.cross(A);
	this->leftNorm.norm();
	
	this->topNorm = B.cross(C);
	this->topNorm.norm();

	// Normals of the frustum around farBottomRight
	A = this->farBottomLeft - this->farBottomRight;
	B = this->farTopRight - this->farBottomRight;
	C = this->nearBottomRight - this->farBottomRight;
	
	this->backNorm = A.cross(B);
	this->backNorm.norm();
	
	this->rightNorm = B.cross(C);
	this->rightNorm.norm();

	this->bottomNorm = C.cross(A);
	this->bottomNorm.norm();
};


// The projection matrix (note it's invertable)
// SKIPPED THIS DERIVATION - right from OpenGL book
void Camera::privUpdateProjectionMatrix( void )
{
	this->projMatrix[m0] = 2.0f * this->nearDist / this->near_width;
	this->projMatrix[m1] = 0.0f;
	this->projMatrix[m2] = 0.0f;
	this->projMatrix[m3] = 0.0f;
	
   this->projMatrix[m4] = 0.0f;
	this->projMatrix[m5] = 2.0f * this->nearDist / this->near_height;
	this->projMatrix[m6] = 0.0f;
	this->projMatrix[m7] = 0.0f;

	this->projMatrix[m8] = 0.0f;
	this->projMatrix[m9] = 0.0f;
	this->projMatrix[m10] = (this->farDist + this->nearDist)/(this->nearDist - this->farDist);
	this->projMatrix[m11] = -1.0f;

	this->projMatrix[m12] = 0.0f;
	this->projMatrix[m13] = 0.0f;
	this->projMatrix[m14] = (2.0f * this->farDist * this->nearDist)/(this->nearDist - this->farDist);
	this->projMatrix[m15] = 0.0f;

};

// this is the ROW-MAJOR ViewMatrix
// changing whole World from perspective of Camera
// stamdard, should also come from book - went through it very fast in lecture
void Camera::privUpdateViewMatrix( void )
{
	// This functions assumes the your vUp, vRight, vDir are still unit
	// And perpendicular to each other
   //  view = Rot(orient) * trans(-(eye.basis) )

	this->viewMatrix[m0] = this->vRight[x];
   this->viewMatrix[m1] = this->vUp[x];
   this->viewMatrix[m2] = this->vDir[x];
   this->viewMatrix[m3] = 0.0f;

	this->viewMatrix[m4] = this->vRight[y];
   this->viewMatrix[m5] = this->vUp[y];
   this->viewMatrix[m6] = this->vDir[y];
   this->viewMatrix[m7] = 0.0f;

	this->viewMatrix[m8]  = this->vRight[z];
	this->viewMatrix[m9]  = this->vUp[z];
	this->viewMatrix[m10] = this->vDir[z];
	this->viewMatrix[m11] = 0.0f;

   // Change of basis (dot with the basis vectors)
   // negative offset
   this->viewMatrix[m12]  = -vPos.dot(vRight);
   this->viewMatrix[m13]  = -vPos.dot(vUp);
   this->viewMatrix[m14] = -vPos.dot(vDir);
   this->viewMatrix[m15] = 1.0f;
};


// Update everything (make sure it's consistent) - called each frame
void Camera::updateCamera(void)
{
   // First find the near height/width, far height/width
	this->privCalcPlaneHeightWidth( );

   // Find the frustum physical verts
	this->privCalcFrustumVerts( );
   // find the frustum collision normals
	this->privCalcFrustumCollisionNormals( );

   // update the projection matrix
	this->privUpdateProjectionMatrix( );

   // update the view matrix
	this->privUpdateViewMatrix( );

}

void Camera::quatRotVertical(float angle_radians)
{
    Vect A;
    this->getPos(A);

    Vect C;
    this->getUp(C);

    Vect Up = C-A;
    Vect Dir;    
    this->getDir(Dir);
    
    Vect Left = Up.cross(Dir);
    Left.norm();

    //  Quat(const RotAxisAngleType, const Vect& v, float angle_radians);
    Quat q_axis(ROT_AXIS_ANGLE, Left, angle_radians);
    
    Vect A_new = A * q_axis;
    Vect C_new = C * q_axis;
    Vect Up_new = C_new - A_new;

    this->setOrientAndPosition( Up_new, Vect(0.0f, 0.0f, -1.0f), A_new);

    // printf(" delta: %f\n", delta_y);
    A.print("A:");
    C.print("C:");
    printf("\n");
}

void Camera::quatRotHorizontal(float angle_radians)
{
    Vect A;
    this->getPos(A);

    Vect C;
    this->getUp(C);

    Vect Up = C-A;
    Vect Dir;    
    this->getDir(Dir);
    
    Vect Left = Up.cross(Dir);
    Left.norm();

    //  Quat(const RotAxisAngleType, const Vect& v, float angle_radians);
    Quat q_axis(ROT_AXIS_ANGLE, Up, angle_radians);
    
    Vect A_new = A * q_axis;
    Vect C_new = C * q_axis;
    Vect Up_new = C_new - A_new;

    this->setOrientAndPosition( Up_new, Vect(0.0f, 0.0f, -1.0f), A_new);

    // printf(" delta: %f\n", delta_y);
    A.print("A:");
    C.print("C:");
    printf("\n"); 
}

void Camera::rotUpX(void)
{
        const float ROT_AMOUNT = 0.35f;

         // ****Think of camera rotating in circle - divided into 4
         // determine current position and then adjust coordinates in correct direction   
        if (this->vPos[y] >= 0.0f - MATH_TOLERANCE && this->vPos[y] < 7.0f - MATH_TOLERANCE &&
            this->vPos[z] <= 7.0f && this->vPos[z] > 0.0f + MATH_TOLERANCE)
        {
                this->vPos[y] += ROT_AMOUNT;
                this->vPos[z] -= ROT_AMOUNT;
        }

        else if (this->vPos[y] <= 7.0f && this->vPos[y] > 0.0f &&
                 this->vPos[z] <= 0.0f + MATH_TOLERANCE && this->vPos[z] > -7.0f)
        {
                this->vPos[y] -= ROT_AMOUNT;
                this->vPos[z] -= ROT_AMOUNT;
        }

        else if(this->vPos[y] <= 0.0f && this->vPos[y] > -7.0f &&
                this->vPos[z] >= -7.0f && this->vPos[z] < 0.0f)
        {
                this->vPos[y] -= ROT_AMOUNT;
                this->vPos[z] += ROT_AMOUNT;
        }

        else if(this->vPos[y] >= -7.0f && this->vPos[y] < 0.0f &&
                 this->vPos[z] >= 0.0f && this->vPos[z] < 7.0f)
        {
                this->vPos[y] += ROT_AMOUNT;
                this->vPos[z] += ROT_AMOUNT;
        }

       this->vPos.print("Pos: ");
    // vDir.print("Dir: ");
    // vUp.print ("Up:  ");
       setOrientAndPosition( vUp, Vect(0.0f, 0.0f, -1.0f), vPos);
}

void Camera::rotDownX(void)
{
        const float ROT_AMOUNT = 0.35f;

         // ****Think of camera rotating in circle - divided into 4
         // determine current position and then adjust coordinates in correct direction   
        if (this->vPos[y] <= 0.0f + MATH_TOLERANCE && this->vPos[y] > -7.0f + MATH_TOLERANCE &&
            this->vPos[z] <= 7.0f && this->vPos[z] > 0.0f + MATH_TOLERANCE)
        {
                this->vPos[y] -= ROT_AMOUNT;
                this->vPos[z] -= ROT_AMOUNT;
        }

        else if(this->vPos[y] >= -7.0f && this->vPos[y] < 0.0f - MATH_TOLERANCE &&
                this->vPos[z] <= 0.0f + MATH_TOLERANCE && this->vPos[z] > -7.0f)
        {
                this->vPos[y] += ROT_AMOUNT;
                this->vPos[z] -= ROT_AMOUNT;
        }

        else if(this->vPos[y] >= 0.0f - MATH_TOLERANCE && this->vPos[y] < 7.0f &&
                this->vPos[z] >= -7.0f && this->vPos[z] < 0.0f)
        {
                this->vPos[y] += ROT_AMOUNT;
                this->vPos[z] += ROT_AMOUNT;
        }

        else if (this->vPos[y] <= 7.0f && this->vPos[y] > 0.0f &&
                 this->vPos[z] >= 0.0f && this->vPos[z] < 7.0f)
        {
                this->vPos[y] -= ROT_AMOUNT;
                this->vPos[z] += ROT_AMOUNT;
        }

       this->vPos.print("Pos: ");
    // vDir.print("Dir: ");
    // vUp.print ("Up:  ");
       setOrientAndPosition( vUp, Vect(0.0f, 0.0f, -1.0f), vPos);
}

void Camera::rotRightY(void)
{
        const float ROT_AMOUNT = 0.35f;

         // ****Think of camera rotating in circle - divided into 4
         // determine current position and then adjust coordinates in correct direction   
        if (this->vPos[x] >= 0.0f - MATH_TOLERANCE && this->vPos[x] < 7.0f - MATH_TOLERANCE &&
            this->vPos[z] <= 7.0f && this->vPos[z] > 0.0f + MATH_TOLERANCE)
        {
                this->vPos[x] += ROT_AMOUNT;
                this->vPos[z] -= ROT_AMOUNT;
        }

        else if (this->vPos[x] <= 7.0f && this->vPos[x] > 0.0f &&
                 this->vPos[z] <= 0.0f + MATH_TOLERANCE && this->vPos[z] > -7.0f)
        {
                this->vPos[x] -= ROT_AMOUNT;
                this->vPos[z] -= ROT_AMOUNT;
        }

        else if(this->vPos[x] <= 0.0f && this->vPos[x] > -7.0f &&
                this->vPos[z] >= -7.0f && this->vPos[z] < 0.0f)
        {
                this->vPos[x] -= ROT_AMOUNT;
                this->vPos[z] += ROT_AMOUNT;
        }

        else if(this->vPos[x] >= -7.0f && this->vPos[x] < 0.0f &&
                 this->vPos[z] >= 0.0f && this->vPos[z] < 7.0f)
        {
                this->vPos[x] += ROT_AMOUNT;
                this->vPos[z] += ROT_AMOUNT;
        }

       this->vPos.print("Pos: ");
    // vDir.print("Dir: ");
    // vUp.print ("Up:  ");
       setOrientAndPosition( vUp, Vect(0.0f, 0.0f, -1.0f), vPos);
}

void Camera::rotLeftY(void)
{
        const float ROT_AMOUNT = 0.35f;

         // ****Think of camera rotating in circle - divided into 4
         // determine current position and then adjust coordinates in correct direction   
        if (this->vPos[x] <= 0.0f + MATH_TOLERANCE && this->vPos[x] > -7.0f + MATH_TOLERANCE &&
            this->vPos[z] <= 7.0f && this->vPos[z] > 0.0f + MATH_TOLERANCE)
        {
                this->vPos[x] -= ROT_AMOUNT;
                this->vPos[z] -= ROT_AMOUNT;
        }

        else if(this->vPos[x] >= -7.0f && this->vPos[x] < 0.0f - MATH_TOLERANCE &&
                this->vPos[z] <= 0.0f + MATH_TOLERANCE && this->vPos[z] > -7.0f)
        {
                this->vPos[x] += ROT_AMOUNT;
                this->vPos[z] -= ROT_AMOUNT;
        }

        else if(this->vPos[x] >= 0.0f - MATH_TOLERANCE && this->vPos[x] < 7.0f &&
                this->vPos[z] >= -7.0f && this->vPos[z] < 0.0f)
        {
                this->vPos[x] += ROT_AMOUNT;
                this->vPos[z] += ROT_AMOUNT;
        }

        else if (this->vPos[x] <= 7.0f && this->vPos[x] > 0.0f &&
                 this->vPos[z] >= 0.0f && this->vPos[z] < 7.0f)
        {
                this->vPos[x] -= ROT_AMOUNT;
                this->vPos[z] += ROT_AMOUNT;
        }

       this->vPos.print("Pos: ");
    // vDir.print("Dir: ");
    // vUp.print ("Up:  ");
       setOrientAndPosition( vUp, Vect(0.0f, 0.0f, -1.0f), vPos);
}

// Accessor mess:
Matrix & Camera::getViewMatrix( void )
{
	return this->viewMatrix;
}

Matrix & Camera::getProjMatrix( void)
{
	return this->projMatrix;
}

void Camera::getPos( Vect &outPos) const
{
	outPos = this->vPos;
}

// global up position - not used previously
void Camera::getUp( Vect &outUp) const
{
    outUp = this->vUp + this->vPos;
}

// is this needed????
 void Camera::getTar( Vect& tarPos)const
 {
     tarPos = this->vPos + this->vDir;
 }

void Camera::getDir( Vect &outDir) const
{
    outDir = this->vDir;
}

void Camera::setPos(const Vect &inPos)
{
	this->vPos = inPos;
};

void Camera::getFieldOfView( float &Value) const
{
	Value = this->aspectRatio;
};

void Camera::setFieldOfView( const float Value)
{
	this->aspectRatio = Value;
};

void Camera::getNearDist( float &Value) const
{
	Value = this->nearDist;
}

void Camera::setNearDist( const float Value)
{
	this->nearDist = Value;
}

// Accessors for frustum/culling tests
void Camera::getNearBottomLeft( Vect &out) const
{
    out = this->nearBottomLeft;
}
void Camera::getFarTopRight(Vect &out) const
{
    out = this->farTopRight;
}

void Camera::getFrontNorm(Vect &out) const
{
    out = this->frontNorm;
}

void Camera::getBackNorm(Vect &out) const
{
    out = this->backNorm;
}

void Camera::getRightNorm(Vect &out) const
{
    out = this->rightNorm;
}

void Camera::getLeftNorm(Vect &out) const
{
    out = this->leftNorm;
}

void Camera::getTopNorm(Vect &out) const
{
    out = this->topNorm;
}

void Camera::getBottomNorm(Vect &out) const
{
    out = this->bottomNorm;
}
