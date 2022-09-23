#include <iostream>
#include "Line.h"

using namespace std;

int main()
{
	
	double k, b, k2, b2; //line parameter

	cout << "Enter the first line parameters (k,b): " << endl;
	cin >> k >> b;
	Line line1(k, b);
	line1.Print();
	cout << endl;

	cout << "Enter the second line parameters (k,b): " << endl;
	cin >> k >> b;
	Line line2(k, b);
	line2.Print();
	cout << endl;

	cout << "Is line 1 == line 2? " << (line1 == line2) << endl << endl;
	
	cout << "Enter a value of multiplier for the first line k value: " << endl;
	cin >> k2;
	line1 * k2;
	line1.Print();
	cout << endl;
	
	cout << "Enter a value to add for the first line b value: " << endl;
	cin >> b2;
	line1 + b2;
	line1.Print();

	return 0;

	
}


