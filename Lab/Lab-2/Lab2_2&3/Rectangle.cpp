#include "Rectangle.h"
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

Rectangle::Rectangle()
{
	double xCoord = 0;
	double yCoord = 0;
	double width = 0;
	double height = 0;
	double area = 0;


}

Rectangle::Rectangle(double x, double y, double w, double h)
{
	xCoord = x;
	yCoord = y;
	width = w;
	height = h;
}

double Rectangle::getX()
{
	return xCoord;
}

double Rectangle::getY()
{
	return yCoord;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight()
{
	return height;
}


void Rectangle::setX(double x)
{
	xCoord = x;
}

void Rectangle::setY(double y)
{
	yCoord = y;
}

void Rectangle::setWidth(double w)
{
	width = w;
}

void Rectangle::setHeight(double h)
{
	width = h;
}

double Rectangle::getArea()
{
	return width * height;
}

void Rectangle::mirrorX()
{
	yCoord = -yCoord;
}

void Rectangle::mirrorY()
{
	xCoord = -xCoord;
}

void Rectangle::mirrorOrigin()
{
	xCoord = -xCoord;
	yCoord = -yCoord;
}

bool Rectangle:: operator >(const Rectangle& r2) const 
{

	double a1 = width * height;
	double a2 = r2.width * r2.height;
	return a1 > a2;

}

double Rectangle:: operator -(const Rectangle& r2) const
{
	double a1 = width * height;
	double a2 = r2.width * r2.height;
	return a1 - a2;

}

void Rectangle::Print()
{	
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "The origin of the rectangle is " << endl; 
	cout << "Width " << setw(10) << left << width << "Height " << setw(10) << left << height << endl;

}

double Rectangle::computeIOU(Rectangle & r2)
{
	double overlapA, unionA, IOU, x_distance, y_distance;

	x_distance = min(xCoord + width, r2.xCoord + r2.width) - max(xCoord, r2.xCoord);
	y_distance = min(yCoord + height, r2.yCoord + r2.height) - max(yCoord, r2.yCoord);

	overlapA = x_distance * y_distance;

	unionA = (getArea() + r2.getArea()) - overlapA;

	IOU = overlapA / unionA;
	return IOU;

}