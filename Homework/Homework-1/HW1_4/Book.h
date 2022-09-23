#pragma once
#include <string>

using namespace std;

class Book {
private :
	int book_number;
	string book_title;
	string book_author;
	string book_genre;
	int number_page;

public :

	Book(int n, string t, string a, string g, int p);
	void operator =(const Book& b);
	void Print();

};