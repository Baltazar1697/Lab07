#include "Book.h"
#include <iostream>

using namespace std;

istream& operator>>(istream& s, Book& b)			// Overloaded operator to input the Book name and genre
{
	s >> b.Book_name >> b.Genre;
	return s;
}
ostream& operator<<(ostream& s, const Book& b)		// Overloaded operator to print the Book name and it's genre
{
	s << b.Book_name << "  " << b.Genre;
	return s;
}

bool operator==(Book b1, Book b2)					// Overloaded operator to check the equivalence of books
{
	if (b1.Book_name == b2.Book_name) {
		return true;
	}
	else {
		return false;
	}
}



Book::Book()										// Default constructor
{
	this->Book_name = "default";
	this->Genre = "def";
}

Book::Book(string name, string genre)				// Constructor with arguments
{
	this->Book_name = name;
	this->Genre = genre;
}
