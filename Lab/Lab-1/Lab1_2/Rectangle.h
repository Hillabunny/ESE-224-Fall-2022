#pragma once


class Rectangle
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

	
};