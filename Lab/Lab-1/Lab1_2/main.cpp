#include <iostream>
#include "Rectangle.h"

using namespace std; //make the code assume theres a std in front of cout or cin

int main()
{

	cout << "Test default constructor: " << endl;
	Rectangle r1;
	cout << "The origin is (" << r1.getX() << "," << r1.getY() << ")" << endl;
	cout << "The width is: " << r1.getWidth() << endl;
	cout << "The height is: " << r1.getHeight() << endl;


	cout << "Test parameterized constructor: " << endl;
	cout << "Enter the parameters (x, y, w, h): " << endl;
	
	double x, y, w, h;

	cin >> x >> y >> w >> h;


	Rectangle r2(x, y, w, h);

	cout << "The origin is (" << r2.getX() << "," << r2.getY() << ")" << endl;
	cout << "The width is: " << r2.getWidth() << endl;
	cout << "The height is: " << r2.getHeight() << endl;

	cout << "\n";

	cout << "Computing the area of the rectangle: " << endl;
	double area = r2.getArea();

	cout << "The area is: " << area << endl;

	cout << "\n";

	cout << "Make mirror of the x-axis: " << endl;
	r2.mirrorX();
	cout << "The rectangle after mirrored x-axis: " << endl;
	cout << "The origin is (" << r2.getX() << ", " << r2.getY() << ") " << endl;
	cout << "The width is: " << r2.getWidth() << endl;
	cout << "The height is: " << r2.getHeight() << endl;

	cout << "\n";

	cout << "Make mirror of the y-axis: " << endl;
	r2.mirrorY(); r2.mirrorX(); //flip the previous one so it's corrected
	cout << "The rectangle after mirrored y-axis: " << endl;
	cout << "The origin is (" << r2.getX() << ", " << r2.getY() << ") " << endl;
	cout << "The width is: " << r2.getWidth() << endl;
	cout << "The height is: " << r2.getHeight() << endl;
	
	cout << "\n";

	cout << "Make mirror of the origin: " << endl;
	r2.mirrorY(); r2.mirrorOrigin(); //flip the previous one so it's corrected
	cout << "The rectangle after mirrored from the origin: " << endl;
	cout << "The origin is (" << r2.getX() << ", " << r2.getY() << ") " << endl;
	cout << "The width is: " << r2.getWidth() << endl;
	cout << "The height is: " << r2.getHeight() << endl;

} 
