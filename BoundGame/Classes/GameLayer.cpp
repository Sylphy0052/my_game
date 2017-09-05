#include "GameLayer.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* GameLayer::createScene()
{
    return GameLayer::create();
}

bool GameLayer::init() {
    if(!Scene::init()) {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    return true;
}
