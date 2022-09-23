#include <iostream>
#include "LineRect.h"

using namespace std;

bool isIntersect(Rectangle& r1, Line& line)
{
	double i; //initialize counter

	for (i = r1.getX(); i <= r1.getX() + r1.getWidth(); i = i + 0.5) //i is the rectangle x coordinate and is increasing by 0.5 after each loop
	{
		if (r1.getY() <= i * line.getK() + line.getB() <= r1.getY() + r1.getHeight())

			return true;
	}
	return false;
}

int main()
{

	double k, b, k2, b2; //line parameter

	cout << "Enter the line parameters (k,b): " << endl;
	cin >> k >> b;
	Line line(k, b);
	line.Print();
	cout << endl;

	double x, y, w, h; //rectangle parameters

	cout << "Enter the rectangle parameters (x,y,w,h): " << endl;
	cin >> x >> y >> w >> h;
	Rectangle rectangle(x, y, w, h);
	rectangle.Print();
	cout << endl;

	cout << "Is the rectangle and the first line intersect?" << endl;
	cout << isIntersect(rectangle, line);
	cout << endl;

}

