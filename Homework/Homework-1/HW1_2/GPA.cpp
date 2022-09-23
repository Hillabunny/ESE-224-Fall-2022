#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	char letter;
	float GPA;

	cout << "Input the letter grade to convert to the coresponding GPA: ";
	cin >> letter;
	letter = toupper(letter); //converts the user input to uppercase
	
	cout << fixed << setprecision(2); //set the decimal numbers to 0

		switch (letter)
		{
		case 'A': // 'A' for letter
			GPA = 4.00;
			cout << "The GPA of letter " << letter << " is " << GPA;
			break;
		case 'B':
			GPA = 3.00;
			cout << "The GPA of letter " << letter << " is " << GPA;
			break;
		case 'C':
			GPA = 2.00;
			cout << "The GPA of letter " << letter << " is " << GPA;
			break;
		case 'D':
			GPA = 3.00;
			cout << "The GPA of letter " << letter << " is " << GPA;
			break;
		case 'F':
			GPA = 0.00;
			cout << "The GPA of letter " << letter << " is " << GPA;
			break;
		default:
			cout << "Invalid input." << endl;
			break;
		}

		return 0;

}
