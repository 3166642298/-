#pragma once
#ifndef YELLOWDUCK
#define YELLOWDUCK
#include"Duck.h"
class YellowDuck :public Duck {
public:
	YellowDuck(FlyBehavior* flyBehavior,QuackBehavior* quackBehavior):Duck(flyBehavior,quackBehavior){
		this->Name = "小黄鸭";
	}//子类调用父类构造函数
};
#endif
