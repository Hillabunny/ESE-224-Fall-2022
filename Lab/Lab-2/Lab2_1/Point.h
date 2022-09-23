#pragma once

class Point
{

private:
	double xCoord, yCoord;

public:
	Point();
	Point(double x, double y);

	double getX();
	double getY();

	void setX(double x);
	void setY(double y);

	double Distance(const Point& p2) const; //const prevent changing the p2 if it gets passed in
	double operator -(const Point& p2) const;
	bool Equal(const Point& p2) const;
	bool operator ==(const Point& p2) const;
	void Print();

};