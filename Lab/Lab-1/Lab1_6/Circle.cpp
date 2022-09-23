#include <iostream>
#include "Circle.h"
#include <math.h>

using namespace std;

Circle::Circle() {

	x_coordinate = 0;
	y_coordinate = 0;
	radius = 0;

}

Circle::Circle(double x, double y, double r)
{

	x_coordinate = x;
	y_coordinate = y;
	radius = r;

}

double Circle::getX()
{
	return x_coordinate;
}

double Circle::getY()
{
	return y_coordinate;
}

double Circle::getR()
{
	return radius;
}

double Circle::pointdistance(int xpoint, int ypoint)
{
	return sqrt(pow(x_coordinate - xpoint, 2) + pow(y_coordinate - ypoint, 2));
}

bool Circle::insideCoordinate(int xpoint, int ypoint)
{
	if (pow(x_coordinate - xpoint, 2) + pow(y_coordinate - ypoint, 2) < (radius * 2)){
	return 1;
}
	else {
		return 0;
	}

}
