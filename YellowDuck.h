#pragma once
#ifndef YELLOWDUCK
#define YELLOWDUCK
#include"Duck.h"
class YellowDuck :public Duck {
public:
	YellowDuck(FlyBehavior* flyBehavior,QuackBehavior* quackBehavior):Duck(flyBehavior,quackBehavior){
		this->Name = "С��Ѽ";
	}//������ø��๹�캯��
};
#endif
