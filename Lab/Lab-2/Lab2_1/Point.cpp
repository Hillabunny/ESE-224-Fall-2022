#include "Point.h"
#include <cmath>
#include <iostream>

using namespace std;

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

double Point::Distance(const Point& p2) const 
{

	double dx = p2.xCoord - xCoord;
	double dy = p2.yCoord - yCoord;
	return sqrt(pow(dx, 2) + pow(dy, 2));

}

double Point::operator -(const Point& p2) const 
{
	double dx = p2.xCoord - xCoord;
	double dy = p2.yCoord - yCoord;
	return sqrt(pow(dx, 2) + pow(dy, 2));

}

bool Point::Equal(const Point& p2) const 
{

	return (p2.xCoord == xCoord ) && (p2.yCoord == yCoord); //&& logic operators

}

bool Point::operator ==(const Point& p2) const 
{

	return (p2.xCoord == xCoord) && (p2.yCoord == yCoord);

}


void Point::Print()
{

	cout.setf(ios::fixed);
	cout.precision(3);
	cout << "The point is (" << getX() << ", " << getY() << ")" << endl;

}

