#include "Circle.h"
Circle::Circle(int r)
{
	this->r = r;
}
double Circle::getLength()
{
	return 2 * PI * r;
}
double Circle::getArea()
{
	return pow((PI * r), 2);
}
ostream& Circle::operator<<(ostream& o)
{
	o << "Circle radius = " << r << endl
		<< "Circle area = " << this->getArea() << endl
		<< "Circle length = " << this->getLength() << endl;
	return o;
}
