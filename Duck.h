#pragma once
#ifndef DUCK_H
#define DUCK_H
#include<iostream>
#include"FlyBehavior.h"
#include"QuackBehavior.h"
using namespace std;
class Duck {
public:
	Duck() = default;
	FlyBehavior* flyBehavior;//代表飞行行为

	QuackBehavior* quackBehavior;//代表叫行为

	string Name;//代表鸭的名字
	
	Duck(FlyBehavior* f, QuackBehavior* q);

    void display();//展示函数
	
	void swim();//展示游泳

    virtual void performFly();//展示飞行

    virtual void performQuack();//展示鸭叫

	virtual ~Duck() = default;
};
#endif