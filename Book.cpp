#include "Book.h"
#include <iostream>
using namespace std;
istream& operator>>(istream& s, Book& b)
{
	s >> b.Book_name >> b.Genre;
	return s;
}
ostream& operator<<(ostream& s, const Book& b)
{
	s << b.Book_name << "  " << b.Genre;
	return s;
}

bool operator==(Book b1, Book b2)
{
	if (b1.Book_name == b2.Book_name) {
		return true;
	}
	else {
		return false;
	}
}



Book::Book()
{
	this->Book_name = "default";
	this->Genre = "def";
}

Book::Book(string name, string genre)
{
	this->Book_name = name;
	this->Genre = genre;
}
