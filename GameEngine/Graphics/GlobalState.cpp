#include "OpenGLWrapper.h"

#include <stdio.h>
#include "Pyramid.h"
#include "PyramidObject.h"
#include "Cube.h"
#include "CubeObject.h"
#include "PieWedge.h"
#include "PieWedgeObject.h"
#include "SpaceFrigateObject.h"
#include "PumpkinObject.h"
#include "WatchTowerObject.h"
#include "MayanPyramidObject.h"
#include "GlobalState.h"
#include "UserInterface.h"
#include "RenderScene.h"
#include "GraphicsObjectManager.h"
#include "AnimationManager.h"
#include "TextureMap.h"
#include "Timer.h"
#include "Anim.h"
#include "BearWalk.h"
#include "BearIdle.h"
#include "AnimTwoBone.h"


Camera *pCamera;

PyramidObject *p;
PumpkinObject* pk;
MayanPyramidObject *mp;
WatchTowerObject *wt;
SpaceFrigateObject *f;

#define ANIMATION 1     // enables timer and sets up animation-specific objects in this file, sets camera in UserInterface
#define MODEL_VIEWER 0 // creates models and sets camera in UserInterface
#define COLLISION_DEMO 0 

CubeObject* collisionCube; // for collision detection demo only - need access to it in UserInterface.cpp

// private only to this file

void createFBXModels(GraphicsObjectManager* const goMgr);
void createCubeObjects(Cube* const pCube, GraphicsObjectManager* const goMgr);
void createPieWedgeObjects(PieWedge* const pPieWedge, GraphicsObjectManager* const goMgr);
void createPyramidObjects(Pyramid* const pPyramid, GraphicsObjectManager* const goMgr);

void createGraphicsWindow()
{
    printf("createGraphicsWindow()\n");
    system("mode con cols=125");
    system("mode con lines=82000");

    // set display mode - double buffering, RGBA colors, z depth buffer
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH | GLUT_STENCIL);

    // set window size
	glutInitWindowSize(800, 600);

    // create the window and name it
	glutCreateWindow("Graphics Engine");

    // callback if someone changes size
    glutReshapeFunc(ChangeSize);

    // callback for key presses - these were checked inside glutMainloop. Now we are in control
    glutSpecialFunc(SpecialKeys);

    // callback for rendering (drawing) scene - don't need anymore, now inside game loop
    glutDisplayFunc(RenderScene);
        
    // extension library - initialize
	GLenum err = glewInit();
	if (GLEW_OK != err) 
    {
		fprintf(stderr, "GLEW Error: %s\n", glewGetErrorString(err));
		// return error; commented out bc it was taken out of main, this function doesn't return a value
	}

#if ANIMATION
    // add a callback timer - in 16 ms, it will callback Timer Function
    glutTimerFunc(16, TimerFunction, 1);
#endif

    frameworkSetup();
}

void frameworkSetup()
{
	// todo: move this to a one time call only
	pCamera = new Camera();

	// Initially setup the camera - this might not be needed since ChangeSize is always called at the beginning
	pCamera->setViewport( 0, 0, 800, 600);
	pCamera->setPerspective( 35.0f, float(800)/float(600), 1.0f, 500.0f);
	// pCamera->setOrientAndPosition( Vect(0.0f, 1.0f, 0.0f), Vect(0.0f, 0.0f, -1.0f), Vect(0.0f, 0.0f, 7.0f) );
 
#if ANIMATION
    AnimationManager* animManager = AnimationManager::GetInstance();

    // create animations and add 'em to animList in manager
    // can add them in each anim's ctor
    Anim* bearWalk = new BearWalk();
    animManager->AddAnim(bearWalk); 

    // Anim* bearIdle = new BearIdle();
    // animManager->AddAnim(bearIdle);

    // Anim* twoBone = new AnimTwoBone();
    // animManager->AddAnim(twoBone);

#endif

#if MODEL_VIEWER

    GraphicsObjectManager *goMgr = GraphicsObjectManager::getInstance();
    createFBXModels(goMgr);

    // PieWedge* pPieWedge = new PieWedge();  
    // pPieWedge->loadTexture();
    // pPieWedge->createVAO();   
    // createPieWedgeObjects(pPieWedge, goMgr);
    // 
    // Pyramid* pPyramid = new Pyramid();
    // pPyramid->loadTexture();
    // pPyramid->createVAO();
    // createPyramidObjects(pPyramid, goMgr);   
    // 
    //     // ***Geometry*** - create models - cube here for Collision_Demo
    // Cube* pCube = new Cube();
    // // allocates a texture object with an ID, binds it, and sets up the texture state via call to LoadTGATexture()
    // pCube->loadTexture();
    // pCube->createVAO(); 
    // createCubeObjects(pCube, goMgr);

#endif

#if COLLISION_DEMO

    GraphicsObjectManager *goMgr = GraphicsObjectManager::getInstance();

    //  ***Geometry*** - create models - cube here for Collision_Demo
    Cube* pCube = new Cube();
    // allocates a texture object with an ID, binds it, and sets up the texture state via call to LoadTGATexture()
    pCube->loadTexture();
    pCube->createVAO(); 

    // CubeObject *c = new CubeObject("Cube A");
    collisionCube = new CubeObject("Collision Cube", pCube);
    // collisionCube->setPos( Vect(0.0f, 0.0f, 0.0f) );
    collisionCube->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    collisionCube->setLightColor( Vect(0.0f, 1.0f, 0.0f, 1.0f) );
    collisionCube->setTexture(TEX1);
    collisionCube->setShader(POINT_LIGHT_DIFF);
    goMgr->addObject(collisionCube);

#endif
}

// This function is called once every frame.
// Use this function to control process order
// Input, AI, Physics, Animation, and Graphics
void GameLoop( void )
{
    // use animManager to animate through its animList
    AnimationManager* animManager = AnimationManager::GetInstance();
    animManager->animateObjects();

    // Handle other tasks here?
    // processInputs/SpecialKeys
    // RenderScene();   
}

void TimerFunction(int )
{
    // Create a Timer.
    static Timer timer;

    Time elapsedTime = timer.toc();

    // int timeInMs = Time :: quotient( elapsedTime, Time(TIME_ONE_MILLISECOND) );     
    // printf("Frames: ms:%d\n",timeInMs);

    // Mark our begin time - tick -> GameLoop -> toc in reverse order to display ms between frames
    timer.tic();

	// trigger the game loop, every 16ms
	GameLoop();

	// reset the timer - specify that it triggers every 16 ms to call GameLoop
	glutTimerFunc(16,TimerFunction, 1);
}

void createFBXModels(GraphicsObjectManager* const goMgr) 
{
    GeometryModel* pSpaceFrigate = new GeometryModel();
    GeometryModel* pPumpkin = new GeometryModel();
    GeometryModel* pWatchTower = new GeometryModel();
    GeometryModel* pMayanPyramid = new GeometryModel();

    pSpaceFrigate->loadModel("space_frigate_runtime.spu", "space_frigate_index");
    pPumpkin->loadModel("pumpkin_runtime.spu", "pumpkin_index");
    pWatchTower->loadModel("tower_runtime.spu", "tower_index");
    pMayanPyramid->loadModel("mayan_pyramid_runtime.spu", "mayan_index"); 

    // MayanPyramidObject *mp = new MayanPyramidObject("Mayan Pyramid", pMayanPyramid);
    mp = new MayanPyramidObject("Mayan Pyramid", pMayanPyramid);
	mp->setPos( Vect(-12.0f, -2.0f, -25.0f) );
	mp->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
	mp->setLightColor( Vect(1.0f, 1.0f, 1.0f, 0.0f) );
    mp->setTexture(TEX1);
	goMgr->addObject(mp);

    // WatchTowerObject *wt = new WatchTowerObject("Watch Tower", pWatchTower);
    wt = new WatchTowerObject("Watch Tower", pWatchTower);
	wt->setPos( Vect(10.0f, 20.0f, 5.0f) );
	wt->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
	wt->setLightColor( Vect(1.0f, 1.0f, 1.0f, 0.0f) );
    wt->setTexture(TEX1);
	goMgr->addObject(wt);

   // PumpkinObject *pk = new PumpkinObject("Pumpkin", pPumpkin);
    pk = new PumpkinObject("Pumpkin", pPumpkin);
	pk->setPos( Vect(-27.0f, -2.0f, 5.0f) );
	pk->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
	pk->setLightColor( Vect(1.0f, 1.0f, 1.0f, 0.0f) );
    pk->setTexture(TEX1);
	goMgr->addObject(pk);

    // SpaceFrigateObject *f = new SpaceFrigateObject("Space Frigate", pSpaceFrigate);
    f = new SpaceFrigateObject("Space Frigate", pSpaceFrigate);
	f->setPos( Vect(15.0f, 0.0f, -45.0f) );
	f->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
	f->setLightColor( Vect(1.0f, 1.0f, 1.0f, 0.0f) );
    f->setTexture(TEX1);
	goMgr->addObject(f); 
}

void createCubeObjects(Cube* const pCube, GraphicsObjectManager* const goMgr)
{
    CubeObject *c = new CubeObject("Cube A", pCube);
    c->setPos( Vect(0.0f, 0.0f, 0.0f) );
    c->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    c->setLightColor( Vect(0.0f, 1.0f, 0.0f, 1.0f) );
    c->setTexture(TEX1);
    c->setShader(FLAT);
    goMgr->addObject(c);

    CubeObject	*c1 = new CubeObject("Cube B", pCube);
    c1->setPos( Vect(-2.0f, 0.0f, 0.0f) );
    c1->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    c1->setLightColor( Vect(1.0f, 0.0f, 0.0f, 1.0f) );
    c1->setTexture(TEX1);
    c1->setShader(POINT_LIGHT_DIFF);
    goMgr->addObject(c1);


    CubeObject *c2 = new CubeObject("Cube C", pCube);
    c2->setPos( Vect(2.0f, 0.0f, 0.0f) );
    c2->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    c2->setLightColor( Vect(0.30f, 0.30f, 1.2f, 1.0f) );
    c2->setTexture(TEX1);
    c2->setShader(TEXTURE_REPLACE);
    goMgr->addObject(c2);

    CubeObject *c3 = new CubeObject("Cube D", pCube);
    c3->setPos( Vect(0.0f, 1.5f, 0.0f) );
    c3->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    c3->setLightColor( Vect(1.0f, 1.0f, 1.0f, 1.0f) );
    c3->setTexture(TEX2);
    goMgr->addObject(c3);


    CubeObject	*c4 = new CubeObject("Cube E", pCube);
    c4->setPos( Vect(-2.0f, 1.5f, 0.0f) );
    c4->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    c4->setLightColor( Vect(1.0f, 0.0f, 1.0f, 1.0f) );
    c4->setTexture(TEX1);
    goMgr->addObject(c4);


    CubeObject *c5 = new CubeObject("Cube F", pCube);
    c5->setPos( Vect(2.0f, 1.5f, 0.0f) );
    c5->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    c5->setLightColor( Vect(0.0f, 1.00f, 1.0f, 1.0f) );
    c5->setTexture(TEX1);
    goMgr->addObject(c5);


    CubeObject *c6 = new CubeObject("Cube G", pCube);
    c6->setPos( Vect(0.0f, -1.5f, 0.0f) );
    c6->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    c6->setLightColor( Vect(0.75f, 0.75f, 0.75f, 1.0f) );
    c6->setTexture(TEX2);
    goMgr->addObject(c6);


    CubeObject	*c7 = new CubeObject("Cube H", pCube);
    c7->setPos( Vect(-2.0f, -1.5f, 0.0f) );
    c7->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    c7->setLightColor( Vect(1.0f, 0.0f, 0.0f, 1.0f) );
    c7->setTexture(TEX1);
    goMgr->addObject(c7);


    CubeObject *c8 = new CubeObject("Cube I", pCube);
    c8->setPos( Vect(2.0f, -1.5f, 0.0f) );
    c8->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    c8->setLightColor( Vect(0.5f, 0.5f, 0.5f, 1.0f) );
    c8->setTexture(TEX2);
    goMgr->addObject(c8); 

    CubeObject	*c9 = new CubeObject("Cube J", pCube);
    c9->setPos( Vect(0.0f, 0.0f, 3.0f) );
    c9->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    c9->setLightColor( Vect(1.0f, 0.0f, 0.0f, 1.0f) );
    c9->setTexture(TEX1);
    c9->setShader(POINT_LIGHT_DIFF);
    goMgr->addObject(c9);
}

void createPieWedgeObjects(PieWedge* const pPieWedge, GraphicsObjectManager* const goMgr)
{
    PieWedgeObject* w = new PieWedgeObject("Wedge A", pPieWedge);
    w->setPos( Vect(0.0f, 0.0f, -10.0f) );
    w->setLightPos( Vect(1.0f, 10.0f, 7.0f) );
    w->setLightColor( Vect(1.0f, 1.0f, 0.0f, 1.0f) );
    w->setTexture(TEX1);
    w->setShader(POINT_LIGHT_DIFF);
    goMgr->addObject(w);

    PieWedgeObject* w2 = new PieWedgeObject("Wedge B", pPieWedge);
    w2->setPos( Vect(-2.0f, 0.0f, -10.0f) );
    w2->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    w2->setLightColor( Vect(3.0f, 3.0f, 3.0f, 1.0f) );
    w2->setTexture(TEX2);
    goMgr->addObject(w2); 

    PieWedgeObject* w3 = new PieWedgeObject("Wedge C", pPieWedge);
    w3->setPos( Vect(2.0f, 0.0f, -10.0f) );
    w3->setLightPos( Vect(1.0f, 10.0f, 7.0f) );
    w3->setLightColor( Vect(0.0f, 1.0f, 0.0f, 1.0f) );
    w3->setTexture(TEX1);
    goMgr->addObject(w3);

    PieWedgeObject* w4 = new PieWedgeObject("Wedge D", pPieWedge);
    w4->setPos( Vect(0.0f, 1.5f, -10.0f) );
    w4->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    w4->setLightColor( Vect(3.0f, 3.0f, 3.0f, 1.0f) );
    w4->setTexture(TEX2);
    w4->setShader(FLAT);
    goMgr->addObject(w4); 

    PieWedgeObject* w5 = new PieWedgeObject("Wedge E", pPieWedge);
    w5->setPos( Vect(-2.0f, 1.5f, -10.0f) );
    w5->setLightPos( Vect(1.0f, 10.0f, 7.0f) );
    w5->setLightColor( Vect(1.0f, 0.0f, 0.0f, 1.0f) );
    w5->setTexture(TEX1);
    goMgr->addObject(w5);

    PieWedgeObject* w6 = new PieWedgeObject("Wedge F", pPieWedge);
    w6->setPos( Vect(2.0f, 1.5f, -10.0f) );
    w6->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    w6->setLightColor( Vect(0.0f, 0.0f, 3.0f, 1.0f) );
    w6->setTexture(TEX2);
    goMgr->addObject(w6); 

    PieWedgeObject* w7 = new PieWedgeObject("Wedge G", pPieWedge);
    w7->setPos( Vect(0.0f, -1.5f, -10.0f) );
    w7->setLightPos( Vect(1.0f, 10.0f, 7.0f) );
    w7->setLightColor( Vect(1.0f, 1.0f, 0.0f, 1.0f) );
    w7->setTexture(TEX1);
    w7->setShader(FLAT);
    goMgr->addObject(w7);

    PieWedgeObject* w8 = new PieWedgeObject("WedgeH", pPieWedge);
    w8->setPos( Vect(-2.0f, -1.5f, -10.0f) );
    w8->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    w8->setLightColor( Vect(3.0f, 3.0f, 3.0f, 1.0f) );
    w8->setTexture(TEX2);
    goMgr->addObject(w8); 

    PieWedgeObject* w9 = new PieWedgeObject("Wedge I", pPieWedge);
    w9->setPos( Vect(2.0f, -1.5f, -10.0f) );
    w9->setLightPos( Vect(1.0f, 10.0f, 7.0f) );
    w9->setLightColor( Vect(1.0f, 1.0f, 0.0f, 1.0f) );
    w9->setTexture(TEX1);
    goMgr->addObject(w9);

    PieWedgeObject* w10 = new PieWedgeObject("Wedge J", pPieWedge);
    w10->setPos( Vect(0.0f, 0.0f, -7.0f) );
    w10->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    w10->setLightColor( Vect(3.0f, 3.0f, 3.0f, 1.0f) );
    w10->setTexture(TEX2);
    w10->setShader(TEXTURE_REPLACE);
    goMgr->addObject(w10); 

}

void createPyramidObjects(Pyramid* const pPyramid, GraphicsObjectManager* const goMgr)
{
    PyramidObject *p = new PyramidObject("Pyramid A", pPyramid);
    p->setPos( Vect(0.0f, 0.0f, -20.0f) );
    p->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    p->setLightColor( Vect(0.0f, 1.0f, 0.0f, 1.0f) );
    p->setTexture(TEX1);
    goMgr->addObject(p);


    PyramidObject	*p1 = new PyramidObject("Pyramid B", pPyramid);
    p1->setPos( Vect(-2.0f, 0.0f, -20.0f) );
    p1->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    p1->setLightColor( Vect(1.0f, 0.0f, 0.0f, 1.0f) );
    p1->setTexture(TEX2);
    goMgr->addObject(p1);


    PyramidObject *p2 = new PyramidObject("Pyramid C", pPyramid);
    p2->setPos( Vect(2.0f, 0.0f, -20.0f) );
    p2->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    p2->setLightColor( Vect(0.30f, 0.30f, 1.2f, 1.0f) );
    p2->setTexture(TEX1);
    goMgr->addObject(p2);

    PyramidObject *p3 = new PyramidObject("Pyramid D", pPyramid);
    p3->setPos( Vect(0.0f, 1.5f, -20.0f) );
    p3->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    p3->setLightColor( Vect(1.0f, 1.0f, 0.0f, 1.0f) );
    p3->setTexture(TEX2);
    goMgr->addObject(p3);


    PyramidObject	*p4 = new PyramidObject("Pyramid E", pPyramid);
    p4->setPos( Vect(-2.0f, 1.5f, -20.0f) );
    p4->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    p4->setLightColor( Vect(1.0f, 0.0f, 1.0f, 1.0f) );
    p4->setTexture(TEX1);
    goMgr->addObject(p4);


    PyramidObject *p5 = new PyramidObject("Pyramid F", pPyramid);
    p5->setPos( Vect(2.0f, 1.5f, -20.0f) );
    p5->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    p5->setLightColor( Vect(0.0f, 1.00f, 1.0f, 1.0f) );
    p5->setTexture(TEX2);
    goMgr->addObject(p5);


    PyramidObject *p6 = new PyramidObject("Pyramid G", pPyramid);
    p6->setPos( Vect(0.0f, -1.5f, -20.0f) );
    p6->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    p6->setLightColor( Vect(1.0f, 1.0f, 0.0f, 1.0f) );
    p6->setTexture(TEX1);
    goMgr->addObject(p6);


    PyramidObject	*p7 = new PyramidObject("Pyramid H", pPyramid);
    p7->setPos( Vect(-2.0f, -1.5f, -20.0f) );
    p7->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    p7->setLightColor( Vect(1.0f, 0.0f, 1.0f, 1.0f) );
    p7->setTexture(TEX2);
    goMgr->addObject(p7);


    PyramidObject *p8 = new PyramidObject("Pyramid I", pPyramid);
    p8->setPos( Vect(2.0f, -1.5f, -20.0f) );
    p8->setLightPos( Vect(1.0f, 1.0f, 0.0f) );
    p8->setLightColor( Vect(0.0f, 1.0f, 1.0f, 1.0f) );
    p8->setTexture(TEX1);
    goMgr->addObject(p8);
}