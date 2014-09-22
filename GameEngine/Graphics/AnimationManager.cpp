#include "AnimationManager.h"
#include "Anim.h"
#include "Skeleton.h"
#include "PyramidObject.h"

AnimationManager::AnimationManager()
{
}

AnimationManager* AnimationManager::GetInstance(void)
{
    return PrivGetInstance();
}

AnimationManager* AnimationManager::PrivGetInstance(void)
{
    static AnimationManager animManager;
    return &animManager;
}

void AnimationManager::AddAnim(Anim* anim)
{
    this->animList.push_front(anim);
}

void AnimationManager::animateObjects(void)
{
    // walk through animList
    std::list<Anim*>::iterator it;
    for(it = animList.begin(); it != animList.end(); it++)
    {
        // local pointer
        Anim *anim = *it;
        
        // get the result bucket for the animation
        FrameBucket* resultBucket = anim->GetResultBucket();

        // get the current time of the current animation
        Time currentTime = anim->GetAnimCurrentTime();

        // get the skeleton and its first bone for the current animation
        Skeleton* animBones = anim->GetSkeleton();
        PyramidObject* firstBone;
        animBones->GetFirstBone(firstBone);

        // first process the animation at the current time, then update its skeleton
        anim->ProcessAnimation( currentTime );
        animBones->updateSkeleton( firstBone, resultBucket );

        // get current animation's delta time or speed, as initialized in its constructor
        Time deltaTime = anim->GetDeltaTime();

        // update the time and call LoopAnimation() in case it needs to loop
        currentTime = anim->SetAnimCurrentTime(currentTime += deltaTime);
        anim->LoopAnimation( currentTime );
        
    }
}