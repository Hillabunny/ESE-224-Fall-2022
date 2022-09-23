#include <iostream>

using namespace std;

int main()
{
	int n1, n2, last_digit, reversed = 0;

	cout << "Input a positive intergers: ";
	cin >> n1;

	n2 = n1;

	while (n1 != 0) {
		last_digit = n1 % 10;
		reversed = (reversed * 10) + last_digit;
		n1 = n1 / 10;
	} 

	cout << "The reversed input is: " << reversed << endl;

	if (n2 == reversed)
		cout << "The input is a palindrome." << endl;
	else
		cout << "The input is not a palindrome." << endl;

	return 0;

}
