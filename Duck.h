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
	FlyBehavior* flyBehavior;//���������Ϊ

	QuackBehavior* quackBehavior;//�������Ϊ

	string Name;//����Ѽ������
	
	Duck(FlyBehavior* f, QuackBehavior* q);

    void display();//չʾ����
	
	void swim();//չʾ��Ӿ

    virtual void performFly();//չʾ����

    virtual void performQuack();//չʾѼ��

	virtual ~Duck() = default;
};
#endif