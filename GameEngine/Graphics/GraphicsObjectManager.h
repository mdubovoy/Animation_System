#ifndef GRAPHICS_OBJECT_MANAGER_H
#define GRAPHICS_OBJECT_MANAGER_H

#include <list>
#include "PCSTree.h"

// forward declare (get into habit)
class GraphicsObject;

// Singleton
class GraphicsObjectManager
{
public:
    void addObject (GraphicsObject* p);
    void drawObjects(void);
    PCSTree *getTree(void);

    // finds global instance of this class, returns it
    static GraphicsObjectManager* getInstance(void);

private:
    static GraphicsObjectManager* privGetInstance();
    GraphicsObjectManager();

    void privDrawObjectsDepthFirst(GraphicsObject *node) const;

    // Data -------------------------------
    class PCSTree goTree;
};

#endif