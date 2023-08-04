#pragma once
#ifndef SQUEAK_H
#define SQUEAK_H
#include"QuackBehavior.h"
class Squeak :public QuackBehavior {
public:
   void Quack() override;
};
#endif