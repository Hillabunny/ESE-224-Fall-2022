#include "LineRect.h"
#include <iostream>
#include <iomanip>

using namespace std;

Line::Line()
{
	double kCoord = 0;
	double bCoord = 0;
}

Line::Line(double k, double b)
{
	kCoord = k;
	bCoord = b;
}

void Line::setK(double k)
{
	kCoord = k;
}

void Line::setB(double b)
{
	bCoord = b;
}

double Line::getK()
{
	return kCoord;
}

double Line::getB()
{
	return bCoord;
}

void Line::Print()
{
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "The line is y = " << setw(8) << right << getK() << " * x + " << setw(8) << right << getB() << endl;
}

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

void Rectangle::Print()
{
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "The origin of the rectangle is " << endl;
	cout << "Width " << setw(10) << left << width << "Height " << setw(10) << left << height << endl;

}