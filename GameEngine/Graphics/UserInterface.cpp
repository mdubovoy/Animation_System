#include "OpenGLWrapper.h"

#include "UserInterface.h"
#include "Camera.h"
#include "CubeObject.h"
#include "PumpkinObject.h"
#include "MayanPyramidObject.h"
#include "WatchTowerObject.h"
#include "SpaceFrigateObject.h"
#include "Pyramid.h"
#include "PyramidObject.h"
#include "AnimationManager.h"
#include "TeddyBearBones.h"

#define UNUSED_VAR(_x) _x;

extern Camera*              pCamera;
extern CubeObject*   collisionCube;
extern PumpkinObject* pk;
extern MayanPyramidObject* mp;
extern WatchTowerObject* wt;
extern SpaceFrigateObject* f;

#define TEDDY_ANIM 1    // enables timer and sets up animation-specific objects in this file, sets camera in UserInterface
#define TWOBONE_ANIM 0
#define MODEL_VIEWER 0 // creaes models and sets camera in UserInterface
#define COLLISION_DEMO 0 // 1 - keys set up to move cube for collision demo, 0 - keys set up to move camera

// Window has changed size, or has just been created. In either case, we need
// to use the window dimensions to set the viewport and the projection matrix.
void ChangeSize(int w, int h)
{
    w = 800;
    h = 600;

    // pCamera = new Camera();
    pCamera->setViewport(0,0,w,h);    
    pCamera->setPerspective(35.0f, float(w)/float(h), 1.0f, 500.0f);
    
    // for COLLISION_DEMO or simple models
    // pCamera->setOrientAndPosition( Vect(0.0f, 1.0f, 0.0f), Vect(0.0f, 0.0f, -1.0f), Vect(0.0f, 0.0f, 7.0f) );
#if TWOBONE_ANIM   
    // these values are for 2Bone animation (up, lookat, camera pos)
    pCamera->setOrientAndPosition( Vect(0.0f, 1.0f, 0.0f), Vect(40.0f, 0.0f, 0.0f), Vect(40.0f, 0.0f, 400.0f) );
#endif

#if TEDDY_ANIM
    // for TeddyBear animation
     pCamera->setOrientAndPosition( Vect(0.0f, 0.0f,1.0f), Vect(0.0f,0.0f,10.0f), Vect(180.0f,0.0f,90.0f) );
#endif

#if MODEL_VIEWER
    // these values are for FBX models
    pCamera->setOrientAndPosition( Vect(0.0f, 1.0f, 0.0f), Vect(0.0f, 0.0f, -1.0f), Vect(0.0f, 0.0f, 42.0f) );
    
    // these values are for simple models
    // pCamera->setOrientAndPosition( Vect(0.0f, 1.0f, 0.0f), Vect(0.0f, 0.0f, -1.0f), Vect(0.0f, 0.0f, 7.0f) );
#endif
}

// Respond to arrow keys by moving the camera frame of reference
void SpecialKeys(int key, int _x, int _y)
{
    UNUSED_VAR(_x); 
    UNUSED_VAR(_y);

#if ANIMATION
    AnimationManager* animManager = AnimationManager::GetInstance();
    std::list<Anim*> animList = animManager->GetAnimList();

    float speed = 0.0f;
    const float speedDelta = 0.01f;
    
    std::list<Anim*>::iterator it;
    if(key == GLUT_KEY_F5)
	{		
        speed = speedDelta; 

        for(it = animList.begin(); it != animList.end(); it++)
        {
            // local pointer
            Anim *anim = *it;

            anim->ChangeDelta(speed);
        }        
    }

    if(key == GLUT_KEY_F6)
    {    
        speed = -speedDelta;

        for(it = animList.begin(); it != animList.end(); it++)
        {
            // local pointer
            Anim *anim = *it;

            anim->ChangeDelta(speed);
        }  
    }

    if(key == GLUT_KEY_F7)
    {   
        for(it = animList.begin(); it != animList.end(); it++)
        {
            // local pointer
            Anim *anim = *it;

            anim->ReverseAnimation();  
        }      
    }

    if(key == GLUT_KEY_F8)
    {    
        for(it = animList.begin(); it != animList.end(); it++)
        {
            // local pointer
            Anim *anim = *it;

            anim->StopAnimation();  
        }  
    }
#endif
           
#if MODEL_VIEWER
    if(key == GLUT_KEY_F1)
    {
        Vect vPos;
        pk->getPos(vPos);
        // estimate object's center - will need to adjust this in PumpkinObject.cpp
        Vect vPosCentered = Vect(vPos[x], vPos[y] + 1.2f, vPos[z]);
        // add a little distance from the object to the camera
        Vect offDistance = Vect(vPos[x], vPos[y] + 1.2f, vPos[z] + 5.0f);
        // maintain up position, use new lookAt and Pos
        pCamera->setOrientAndPosition(Vect(0.0f, 1.0f, 0.0f), vPosCentered, offDistance);
        offDistance.print("New camera Pos:"); 
    }

    if(key == GLUT_KEY_F2)
    {
        Vect vPos;
        wt->getPos(vPos);
        Vect vPosCentered = Vect(vPos[x], vPos[y] + 1.85f, vPos[z]);
        Vect offDistance = Vect(vPos[x], vPos[y] + 1.2f, vPos[z] + 7.0f);
        pCamera->setOrientAndPosition(Vect(0.0f, 1.0f, 0.0f), vPosCentered, offDistance);
        offDistance.print("New camera Pos:"); 
    }

    if(key == GLUT_KEY_F3)
    {
        Vect vPos;
        mp->getPos(vPos);
        Vect vPosCentered = Vect(vPos[x], vPos[y] + -0.1f, vPos[z]);
        Vect offDistance = Vect(vPos[x], vPos[y] + 1.2f, vPos[z] + 31.5f);
        pCamera->setOrientAndPosition(Vect(0.0f, 1.0f, 0.0f), vPosCentered, offDistance);
        offDistance.print("New camera Pos:"); 
    }

    if(key == GLUT_KEY_F4)
    {
        Vect vPos;
        f->getPos(vPos);
        Vect vPosCentered = Vect(vPos[x], vPos[y] + 1.2f, vPos[z]);
        Vect offDistance = Vect(vPos[x], vPos[y] + 1.2f, vPos[z] + 52.0f);
        pCamera->setOrientAndPosition(Vect(0.0f, 1.0f, 0.0f), vPosCentered, offDistance);
        offDistance.print("New camera Pos:"); 
    }
#endif

#if COLLISION_DEMO

    Cube* cubeModel = (Cube*)collisionCube->getCubeModel(); // only Cube (not GeometryModel parent class) has points and normals

    if(key == GLUT_KEY_PAGE_UP)
    {		
        Vect vTmp;
        collisionCube->getPos( vTmp );
        vTmp[z] += 0.08f;
        collisionCube->setPos( vTmp );

        cubeModel->nearBottomLeft[z]  += 0.08f;
        cubeModel->farTopRight[z]     += 0.08f;
        cubeModel->nearTopLeft[z]     += 0.08f;
        cubeModel->nearTopRight[z]    += 0.08f;
        cubeModel->nearBottomRight[z] += 0.08f;
        cubeModel->farTopLeft[z]      += 0.08f;
        cubeModel->farBottomLeft[z]   += 0.08f;
        cubeModel->farBottomRight[z]  += 0.08f;

        collisionCube->CalcCubeCollisionNormals(cubeModel);

        // vTmp.print("Pos: ");
    }

    if(key == GLUT_KEY_PAGE_DOWN)
    {		
        Vect vTmp;
        collisionCube->getPos( vTmp );
        vTmp[z] -= 0.08f;
        collisionCube->setPos( vTmp );

        cubeModel->nearBottomLeft[z]  -= 0.08f;
        cubeModel->farTopRight[z]     -= 0.08f;
        cubeModel->nearTopLeft[z]     -= 0.08f;
        cubeModel->nearTopRight[z]    -= 0.08f;
        cubeModel->nearBottomRight[z] -= 0.08f;
        cubeModel->farTopLeft[z]      -= 0.08f;
        cubeModel->farBottomLeft[z]   -= 0.08f;
        cubeModel->farBottomRight[z]  -= 0.08f;

        collisionCube->CalcCubeCollisionNormals(cubeModel);


        // vTmp.print("Pos: ");
    }

    if(key == GLUT_KEY_UP)
    {		
        Vect vTmp;
        collisionCube->getPos( vTmp );
        vTmp[y] += 0.08f;
        collisionCube->setPos( vTmp );

        cubeModel->nearBottomLeft[y]  += 0.08f;
        cubeModel->farTopRight[y]     += 0.08f;
        cubeModel->nearTopLeft[y]     += 0.08f;
        cubeModel->nearTopRight[y]    += 0.08f;
        cubeModel->nearBottomRight[y] += 0.08f;
        cubeModel->farTopLeft[y]      += 0.08f;
        cubeModel->farBottomLeft[y]   += 0.08f;
        cubeModel->farBottomRight[y]  += 0.08f;

        collisionCube->CalcCubeCollisionNormals(cubeModel);

        // vTmp.print("Pos: ");
    }

    if(key == GLUT_KEY_DOWN)
    {		
        Vect vTmp;
        collisionCube->getPos( vTmp );
        vTmp[y] -= 0.08f;
        collisionCube->setPos( vTmp );

        cubeModel->nearBottomLeft[y]  -= 0.08f;
        cubeModel->farTopRight[y]     -= 0.08f;
        cubeModel->nearTopLeft[y]     -= 0.08f;
        cubeModel->nearTopRight[y]    -= 0.08f;
        cubeModel->nearBottomRight[y] -= 0.08f;
        cubeModel->farTopLeft[y]      -= 0.08f;
        cubeModel->farBottomLeft[y]   -= 0.08f;
        cubeModel->farBottomRight[y]  -= 0.08f;

        collisionCube->CalcCubeCollisionNormals(cubeModel);

        // vTmp.print("Pos: ");
    }

    if(key == GLUT_KEY_RIGHT)
    {		
        Vect vTmp;
        collisionCube->getPos( vTmp );
        vTmp[x] += 0.08f;
        collisionCube->setPos( vTmp );

        cubeModel->nearBottomLeft[x]  += 0.08f;
        cubeModel->farTopRight[x]     += 0.08f;
        cubeModel->nearTopLeft[x]     += 0.08f;
        cubeModel->nearTopRight[x]    += 0.08f;
        cubeModel->nearBottomRight[x] += 0.08f;
        cubeModel->farTopLeft[x]      += 0.08f;
        cubeModel->farBottomLeft[x]   += 0.08f;
        cubeModel->farBottomRight[x]  += 0.08f;

        collisionCube->CalcCubeCollisionNormals(cubeModel);

        // vTmp.print("Pos: ");
    }

    if(key == GLUT_KEY_LEFT)
    {		
        Vect vTmp;
        collisionCube->getPos( vTmp );
        vTmp[x] -= 0.08f;
        collisionCube->setPos( vTmp );

        cubeModel->nearBottomLeft[x]  -= 0.08f;
        cubeModel->farTopRight[x]     -= 0.08f;
        cubeModel->nearTopLeft[x]     -= 0.08f;
        cubeModel->nearTopRight[x]    -= 0.08f;
        cubeModel->nearBottomRight[x] -= 0.08f;
        cubeModel->farTopLeft[x]      -= 0.08f;
        cubeModel->farBottomLeft[x]   -= 0.08f;
        cubeModel->farBottomRight[x]  -= 0.08f;

        collisionCube->CalcCubeCollisionNormals(cubeModel);

        // vTmp.print("Pos: ");
    }
    // Debug print statements
    // collisionCube->getCubeModel()->nearBottomLeft.print("nearBottomLeft: ");
    // collisionCube->getCubeModel()->farTopRight.print("farTopRight: ");
    // collisionCube->getCubeModel()->leftNorm.print("leftNorm: ");
    // collisionCube->getCubeModel()->rightNorm.print("rightNorm: ");

#else   

float delta_y = 0.0f;
float delta_x = 0.0f;

if(key == GLUT_KEY_HOME)
{
    delta_y = 0.1f;
    // pCamera->rotUpX();
    pCamera->quatRotVertical(delta_y);
}

if(key == GLUT_KEY_END)
{
    delta_y = -0.1f;  
    // pCamera->rotDownX();
    pCamera->quatRotVertical(delta_y);
}

if(key == GLUT_KEY_F11)
{
    delta_x = -0.1f;
    // pCamera->rotLeftY();
    pCamera->quatRotHorizontal(delta_x);
}

if(key == GLUT_KEY_F12)
{		
    delta_x = 0.1f;
    // pCamera->rotLeftY();
    pCamera->quatRotHorizontal(delta_x);
}

if(key == GLUT_KEY_PAGE_UP)
{		
    Vect vTmp;
    pCamera->getPos( vTmp );
    vTmp[z] += 1.0f;
    pCamera->setPos( vTmp );
    vTmp.print("Pos: ");
}

if(key == GLUT_KEY_PAGE_DOWN)
{		
    Vect vTmp;
    pCamera->getPos( vTmp );
    vTmp[z] -= 1.0f;
    pCamera->setPos( vTmp );
    vTmp.print("Pos: ");
}

if(key == GLUT_KEY_UP)
{		
    Vect vTmp;
    pCamera->getPos( vTmp );
    vTmp[y] -= 1.0f;
    pCamera->setPos( vTmp );
    vTmp.print("Pos: ");
}

if(key == GLUT_KEY_DOWN)
{		
    Vect vTmp;
    pCamera->getPos( vTmp );
    vTmp[y] += 1.0f;
    pCamera->setPos( vTmp );
    vTmp.print("Pos: ");
}

if(key == GLUT_KEY_RIGHT)
{		
    Vect vTmp;
    pCamera->getPos( vTmp );
    vTmp[x] -= 1.0f;
    pCamera->setPos( vTmp );
    vTmp.print("Pos: ");
}

if(key == GLUT_KEY_LEFT)
{		
    Vect vTmp;
    pCamera->getPos( vTmp );
    vTmp[x] += 1.0f;
    pCamera->setPos( vTmp );
    vTmp.print("Pos: ");
}

#endif

	glutPostRedisplay(); 
}