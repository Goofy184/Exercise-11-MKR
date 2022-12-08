#include "RectangleInCircle.h"
RectangleInCircle::RectangleInCircle(int radius, int storonaA, int storonaB) : Circle(radius), Rectangle(storonaA, storonaB)
{
}
ostream& RectangleInCircle::operator<<(ostream& o)
{
	this->Circle::operator<< (o);
	o << endl;
	this->Rectangle::operator<< (o);
	return o;
}
