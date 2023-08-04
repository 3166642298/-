#pragma once
#ifndef REDDUCK
#define REDDUCK
#include"Duck.h"
class RedDuck :public Duck {
public:
	RedDuck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior) :Duck(flyBehavior, quackBehavior) {
		this->Name = "小红鸭";
	}//子类调用父类构造函数
};
#endif
