#pragma once
#include <iostream>
#include <string>
#define PI 3.14159265358979323846
using namespace std;
class Circle
{
private:
	int r;
public:
	Circle(int r);
	double getLength();
	double getArea();
	ostream& operator<< (ostream& o);
};