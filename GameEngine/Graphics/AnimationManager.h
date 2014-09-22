#ifndef ANIMATION_MANAGER_H
#define ANIMATION_MANAGER_H

#include <list>

// forward declare (get into habit)
class Anim;

// Singleton
class AnimationManager
{
public:
    
    // finds global instance of this class, returns it
    static AnimationManager* GetInstance();

    void AddAnim(Anim* anim);
    
    std::list<Anim*> GetAnimList(){return this->animList;}
    
    // walks through animList and animates multiple objects at once
    // for different skeletons or multiple instances of one skeleton
    void animateObjects(void);

private:
    AnimationManager();
    static AnimationManager* PrivGetInstance();

    // Data
    std::list< Anim* > animList;
};

#endif