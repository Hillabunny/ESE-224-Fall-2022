#include <iostream>
#include "Rectangle.h"

using namespace std; //make the code assume theres a std in front of cout or cin

int main()
{

	//first rectangle (paramerter)	

	cout << "Test parameterized constructor: " << endl;
	cout << "Enter the first rectangle parameters (x, y, w, h): " << endl;

	double x, y, w, h;
	
	cin >> x >> y >> w >> h;
	Rectangle r1(x, y, w, h);
	cout << "\n";

	cout << "The origin is (" << r1.getX() << "," << r1.getY() << ")" << endl;

	r1.Print();
	double area1 = r1.getArea();
	cout << "The area is: " << area1 << endl;
	cout << "\n";

	//second rectangle

	cout << "Enter the second rectangle parameters (x, y, w, h): " << endl;

	cin >> x >> y >> w >> h;
	Rectangle r2(x, y, w, h);
	cout << "\n";

	cout << "The origin is (" << r2.getX() << "," << r2.getY() << ")" << endl;

	r2.Print();
	double area2 = r2.getArea();
	cout << "The area is: " << area2 << endl;
	cout << "\n";

	cout << "Is the area of Rectangle 2 larger than Rectangle 1? (0 for no, 1 for yes) = " << (r2 > r1) << endl;
	cout << "The difference of the area of the two Rectangles: " << abs(r1 - r2) << endl;
	cout << "\n";

	cout << "The IOU of the first and second rectangle is: " << r1.computeIOU(r2) << endl;

	return 0;

}


