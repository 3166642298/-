#pragma once
#ifndef REDDUCK
#define REDDUCK
#include"Duck.h"
class RedDuck :public Duck {
public:
	RedDuck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior) :Duck(flyBehavior, quackBehavior) {
		this->Name = "С��Ѽ";
	}//������ø��๹�캯��
};
#endif
