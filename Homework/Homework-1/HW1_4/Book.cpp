#include <iostream>
#include "Book.h"
#include <string>

using namespace std;

Book::Book(int n, string t, string a, string g, int p) {
	book_number = n;
	book_title = t;
	book_author = a;
	book_genre = g;
	number_page = p;

}

void Book::Print() {
	cout << "Book number: " << book_number << endl;
	cout << "Book title: " << book_title << endl;
	cout << "Book author: " << book_author << endl;
	cout << "Book genre: " << book_genre << endl;
	cout << "Number of pages: " << number_page << endl << endl;

}

void Book::operator = (const Book& bc) {
	book_number = bc.book_number;
	book_title = bc.book_title;
	book_author = bc.book_author;
	book_genre = bc.book_genre;
	number_page = bc.number_page;

}