#include "Line.h"
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

bool Line::operator ==(Line& line)
{ 
	return (kCoord == line.kCoord && bCoord == line.bCoord);
}

void Line::operator *(double k2)
{

	kCoord = kCoord * k2; //no return value because its void

}
void Line::operator +(double b2)
{
	bCoord = bCoord + b2; //no return value because its void
}
