#pragma once

class Line //the class contains the variables and the methods
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