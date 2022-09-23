#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
	double x, y;

	cout << "Enter the coordinates of p1: " << endl;
	cin >> x >> y;
	Point p1(x, y);

	p1.Print();

	cout << "Enter the coordinates of p2: " << endl;
	cin >> x >> y;
	Point p2(x, y);

	p2.Print();

	cout << "the distance between two points is " << p1.Distance(p2) << endl;
	cout << "the distance between two points is " << p1 - p2 << endl;
	cout << "Are the two points the same? " << p2.Equal(p1) << endl;
	cout << "the distance between two points is " << (p1==p2) << endl;

}
