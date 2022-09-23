#include "Point.h"

Point::Point()
{
	xCoord = 0;
	yCoord = 0;
}


Point::Point(double x, double y) 
{
	xCoord = x;
	yCoord = y;
}

//This is an alternate method below:

/*Point::Point() : xCoord(0), yCoord(0) {}*/ //More compact, xCoord(0) means xCoord = 0

/*Point::Point(double x, double y) : xCoord(x), yCoord(y) {}*/

/*Acessors (a member function which accesses, and perhaps returns, the member variables of an instance of the class (of an object), 
however, it does not change any of the member variables)*/
double Point::getX()
{
	return xCoord;
}

double Point::getY()
{
	return yCoord;
}

/*Mutators (A mutator is a member function that allows
for editing of the contents of a protected data member)*/
void Point::setX(double x)
{
	xCoord = x;
}

void Point::setY(double y)
{
	yCoord = y;

}