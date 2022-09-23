#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
	xCoord = 0;
	yCoord = 0;
	width = 0;
	height = 0;
	area = 0;
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
	xCoord= -xCoord;
}

void Rectangle::mirrorOrigin()
{
	xCoord = -xCoord;
	yCoord = -yCoord;
}