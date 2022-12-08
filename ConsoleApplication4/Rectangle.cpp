#include "Rectangle.h"
Rectangle::Rectangle(int storonaA, int storonaB)
{
	this->storonaA = storonaA;
	this->storonaB = storonaB;
}
double Rectangle::getArea()
{
	return storonaA * storonaB;
}
double Rectangle::getLength()
{
	return (storonaA + storonaB) * 2;
}
ostream& Rectangle::operator<<(ostream& o)
{
	o << "Storona a = " << storonaA << endl
		<< "Storona b = " << storonaB << endl
		<< "Rectangle area = " << this->getArea() << endl
		<< "Rectangle length = " << this->getLength() << endl;
	return o;
}