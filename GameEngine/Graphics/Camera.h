#ifndef CAMERA_H
#define CAMERA_H

// Keenan's reference code
// Feel free to use (Enjoy)

#include "MathEngine.h"

// replaces GL Frame and Projection matrix using transform pipeline - also part of GL frame goo
class Camera
{
public:
	Camera();

    // setup
	void setPerspective(const float FieldOfView_Degs, const float AspectRatio, const float NearDist, const float FarDist);
	void setViewport(const int inX, const int inY, const int width, const int height);
	void setOrientAndPosition(const Vect &inUp, const Vect &inLookAt, const Vect &pos);

    // change any params, reset all matrices to known state
	void updateCamera(void);

    // camera rotations around X and Y axis
    void rotUpX(void);
    void rotDownX(void);
    void rotRightY(void);
    void rotLeftY(void);

    void quatRotVertical(float angle_radians);
    void quatRotHorizontal(float angle_radians);

    // extraction
	Matrix &getViewMatrix();
	Matrix &getProjMatrix();

    // accessors
	void getPos( Vect &outPos) const;
	void setPos( const Vect &inPos);

    // need later? what about lookAt?
    void getTar( Vect& tarPos)const;
    void getUp( Vect &outUp) const;
    void getDir( Vect &outDir) const;
			
	void getFieldOfView( float &Value) const;
	void setFieldOfView( const float Value);

	void getNearDist( float &Value) const;
	void setNearDist( const float Value);

    void getNearBottomLeft( Vect &out) const;
    void getFarTopRight(Vect &out) const;
    void getFrontNorm(Vect &out) const;
    void getBackNorm(Vect &out) const;
    void getRightNorm(Vect &out) const;
    void getLeftNorm(Vect &out) const;
    void getTopNorm(Vect &out) const;
    void getBottomNorm(Vect &out) const;

private:  // methods
   void privSetViewState( void );
	void privCalcPlaneHeightWidth( void );
	void privCalcFrustumVerts( void );
	void privCalcFrustumCollisionNormals( void );
	void privUpdateProjectionMatrix( void );
	void privUpdateViewMatrix( void );

private:  // data  (Keep it private)

	// camera unit vectors (up, dir, right)
	Vect	vUp;
	Vect	vDir; // "look at" vector
	Vect	vRight;  // derived by up and dir
	Vect	vPos;    

	// Define the frustum inputs
	float	nearDist;
	float	farDist;
	float	fovy; // field of view in y direction
	float	aspectRatio;

	// Screen size in world space
	float	near_height;
	float	near_width;
	float	far_height;
	float	far_width;

	// viewports
	int		viewport_x;
	int		viewport_y;
	int		viewport_width;
	int		viewport_height;

	// world space coords for viewing frustum - corners
	Vect	nearTopLeft;
	Vect	nearTopRight;
	Vect	nearBottomLeft;
	Vect	nearBottomRight;	
	Vect	farTopLeft;
	Vect	farTopRight;
	Vect	farBottomLeft;
	Vect	farBottomRight;

	// Normals of the frustum
	Vect	frontNorm;
	Vect	backNorm;
	Vect	rightNorm;
	Vect	leftNorm;
	Vect	topNorm;
	Vect	bottomNorm;

	// Projection Matrix
	Matrix	projMatrix;
	Matrix	viewMatrix;
};


#endif