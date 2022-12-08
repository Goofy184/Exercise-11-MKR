#pragma once
#include <iostream>
using namespace std;
class Rectangle
{
private:
	int storonaA;
	int storonaB;
public:
	Rectangle(int storonaA, int storonaB);
	double getArea();
	double getLength();
	ostream& operator<< (ostream& o);
};
