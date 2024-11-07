#pragma once
#include <iostream>
#include <random>
#include"Librily.h"

using namespace std;


int main()
{
	Point<int>obj1(10);
	obj1.Print();
	obj1.Init(15, 20);
	obj1.Print();
}