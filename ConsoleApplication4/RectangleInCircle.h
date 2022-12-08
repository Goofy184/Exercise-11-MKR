#pragma once
#include "Circle.h"
#include "Rectangle.h"
class RectangleInCircle :public Circle, public Rectangle
{
public:
	RectangleInCircle(int radius, int storonaA, int storonaB);
	ostream& operator<< (ostream& o);

};