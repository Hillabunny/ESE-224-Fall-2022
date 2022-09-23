#pragma once

class Line
{

private:
	double kCoord, bCoord;
public:

	Line();
	Line(double k, double b);

	double getK();
	double getB();
	void setK(double k);
	void setB(double b);

	void Print();
	bool operator ==(Line& l2);
	void operator *(double k2);
	void operator +(double b2);

};

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

	void setX(double x);
	void setY(double y);
	void setWidth(double w);
	void setHeight(double h);
	void Print();
};