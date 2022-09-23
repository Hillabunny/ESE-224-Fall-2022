#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float temp_input;
	float lowest = 0;

	cout << fixed << setprecision(1);

	for (int i = 0; i != 7; i++) {

		cout << "Input temperature value: ";
		cin >> temp_input;

		if (temp_input < lowest) {
			lowest = temp_input;
		}

	}

	cout << "Lowest temperature recorded in 7 days: " << lowest << endl;

	return 0;
}
