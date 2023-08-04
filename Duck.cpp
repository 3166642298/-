#include"Duck.h"
void Duck::display()
{
	cout << "�ҵ�������" + this->Name << endl;
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
	cout << "�һ���Ӿ" << endl;
}