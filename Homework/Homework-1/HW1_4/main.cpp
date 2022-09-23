#include <iostream>
#include "Book.h"
#include <string>

using namespace std;

int main() {

	int n, p;
	string t, a, g;

	Book b1 = Book(1, "Harry Potter and the Order of the Phoenix", "J.K. Rolling", "Fiction", 896);
	Book b2 = Book(2, "Percy Jackson and the Lightning Thief", "Rick Riordan", "Fiction", 379);
	Book b3 = Book(3, "The Bible King James Version", "King James", "Fiction", 1200);
	Book b4 = Book(4, "The Fault in Our Stars", "John Green", "Drama", 313);
	Book b5 = Book(5, "Bunnicula", "James Howe", "Fiction", 128);
	
	
	b1.Print();
	b2.Print();
	b3.Print();
	b4.Print();
	b5.Print();

	cout << "Copying book 2 information to book 1: ";
	b1 = b2;
	cout << endl;

	b1.Print();
	b2.Print();
	b3.Print();
	b4.Print();
	b5.Print();


	return 0;

}
