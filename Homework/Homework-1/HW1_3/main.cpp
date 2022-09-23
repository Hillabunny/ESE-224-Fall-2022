#include <iostream>
#include "Circle.h"

using namespace std;

int main() {

	double x, y, r;
	bool compare;
	double  n;


	cout << "Enter the first circle parameter (x-coordinate, y-coordinate, radius): " << endl;
	cin >> x >> y >> r;
	Circle c1(x, y, r);
	c1.Print();
	cout << endl;

	cout << "Enter the second circle parameter (x-coordinate, y-coordinate, radius): " << endl;
	cin >> x >> y >> r;
	Circle c2(x, y, r);
	c2.Print();
	cout << endl;

	compare = c1 == c2;

	cout << "Is Circle 1 the same as Circle 2? " << compare << endl;


	cout << "Input n multiplier for the first circle radius: " << endl;
	cin >> n;
	c1 * n;
	c1.Print();

	return 0;

}
