#include <iostream> //input output stream 
#include "Point.h"

using namespace std;

int main()
{
	cout << "Creating a point with the default constructor: " << endl;
	Point p1;

	cout << "Creating a point with the parameterized constructor: " << endl;
	cout << "Enter coordinate (x,y): ";

	double x, y;
	cin >> x >> y;

	Point p2(x, y);

	cout << "Change x coordinate of p2, enter the new coordinate: " << endl;
	cin >> x;
	p2.setX(x);
	
	cout << "Point is (" << p2.getX() << "," << p2.getY() << ")" << endl;

	cout << "Change y coordinate of p2, enter the new coordinate: " << endl;
	cin >> y;

	p2.setY(y);
	cout << "Point is (" << p2.getX() << "," << p2.getY() << ")" << endl;


	return 0;
}
