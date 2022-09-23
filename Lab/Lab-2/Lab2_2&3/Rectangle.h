#pragma once


class Rectangle //the class contains the variables and the methods
{

private:
	double xCoord, yCoord, width, height, area;

public:
	Rectangle();

	Rectangle(double x, double y, double w, double h);

	double getX();
	double getY();
	double getWidth();
	double getHeight();

	double getArea();

	void mirrorX();
	void mirrorY();
	void mirrorOrigin();

	void setX(double x);
	void setY(double y);
	void setWidth(double w);
	void setHeight(double h);

	//add 3 more functions

	bool operator > (const Rectangle& r2) const;
	double operator - (const Rectangle& r2) const;
	void Print();

	double computeIOU(Rectangle& r2);

};