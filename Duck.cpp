#include"Duck.h"
void Duck::display()
{
	cout << "我的名字是" + this->Name << endl;
}
void Duck::performFly()
{
	this->flyBehavior->Fly();
}
void Duck::performQuack()
{
	this->quackBehavior->Quack();
}
Duck::Duck(FlyBehavior* f, QuackBehavior* q)
{
	this->flyBehavior = f;
	this->quackBehavior = q;
}
void Duck::swim()
{
	cout << "我会游泳" << endl;
}