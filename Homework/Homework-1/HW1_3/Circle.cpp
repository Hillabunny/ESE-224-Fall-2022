#include "Circle.h"
#include <iostream>
#include <iomanip>

using namespace std;



Circle::Circle(double x, double y, double r) 
{
	center_x = x;
	center_y = y;
	radius = r;
}

void Circle::Print() 
{

	cout << fixed << setprecision(2);
	cout << "The circle is centered at (" << center_x << "," << center_y << ")" << endl;
	cout << "The radius is " << setw(10) << right << radius << setw(10) << right << endl;

}

void Circle::operator *(double n) {

	radius = radius * n;

}

bool Circle::operator ==(Circle& c2) {

	return (center_x == c2.center_x && center_y == c2.center_y && radius == c2.radius);

}
