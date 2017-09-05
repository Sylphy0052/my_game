#ifndef __GAMELAYER_H__
#define __GAMELAYER_H__

#include "cocos2d.h"

class GameLayer : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(GameLayer);
};

#endif
