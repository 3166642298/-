#include<iostream>
#include"Duck.h"
#include"YellowDuck.h"
#include"FlyWithWings.h"
#include"MuteQuack.h"
#include"FlyNoWay.h"
#include"Squeak.h"
#include"RedDuck.h"
using namespace std;
int main()
{
	cout << "��һ��Ѽ" << endl;
	FlyBehavior *fly = new FlyNoWay;
	QuackBehavior* quack = new MuteQuack;
	Duck* duck = new YellowDuck(fly, quack);
	duck->display();
	duck->performFly();
	duck->performQuack();
	delete duck;
	delete fly;
	delete quack;
	cout << endl;

	cout << "�ڶ���Ѽ" << endl;
	FlyBehavior* fly1 = new FlyWithWings;
	QuackBehavior* quack1 = new Squeak;
	RedDuck redDuck(fly1, quack1);
	Duck& duck1 = redDuck;
	duck1.display();
	duck1.performFly();
	duck1.performQuack();
	delete fly1;
	delete quack1;
	cout << endl;
}
