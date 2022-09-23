#pragma once


class Circle {
private:

	double x_coordinate, y_coordinate;
	double radius;

public:

	Circle();
	Circle(double x, double y, double r);

	double getX();
	double getY();
	double getR();
	double pointdistance(int xpoint, int ypoint);
	bool insideCoordinate(int xpoint, int ypoint);


};