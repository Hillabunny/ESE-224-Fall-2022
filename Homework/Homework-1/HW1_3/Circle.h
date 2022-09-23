#pragma once

class Circle {
private:
	double center_x, center_y;
	double radius;
public:

	Circle(double x, double y, double r);

	void Print();

	void operator *(double n);
	bool operator ==(Circle& c2);



};