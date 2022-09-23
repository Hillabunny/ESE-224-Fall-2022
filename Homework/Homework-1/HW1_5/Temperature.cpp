#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double temp_input;
	double max = -1;

	cout << fixed << setprecision(2);

	do {
		cout << "Enter a temperature value: ";
		cin >> temp_input;

		if (temp_input > max) {
			max = temp_input;
		}

		cout << "Max temp inputted: " << max << endl;

	} while (temp_input > 0);

}
	
