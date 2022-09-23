/* Write a program that asks the user to enter the number of atoms of each of the five elements for an amino acid.
Then compute and print the molecular weight for this amino acid. 
In the output, only 3 digits are kept to the right of the decimal point. (e.g. the output should be 215.345 if the calculated result is 215.345320) */

#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	float Oxygen = 15.9994;
	float Carbon = 12.011;
	float Nitrogen = 14.00674;
	float Sulfur = 32.066;
	float Hydrogen = 1.00794;
	float nO, nC, nN, nS, nH;
	float total;


	cout << "Input n number of Oxygen atom: ";
	cin >> nO;
	cout << endl;

	cout << "Input n number of Carbon atom: ";
	cin >> nC;
	cout << endl;

	cout << "Input n number of Nitrogen atom: ";
	cin >> nN;
	
	cout << endl;

	cout << "Input n number of Sulfur atom: ";
	cin >> nS;
	cout << endl;

	cout << "Input n number of Hydrogen atom: ";
	cin >> nH;
	cout << endl;

	total = (Oxygen * nO) + (Carbon * nC) + (Nitrogen * nN) + (Sulfur * nS) + (Hydrogen * nH);

	cout << setprecision(3) << fixed;
	cout << "Molecular weight total: " << total;
	cout << endl;

	return 0;


}
