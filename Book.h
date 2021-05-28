#pragma once
#include <string>
using namespace std;
class Book
{
public:
	string getName() { return Book_name; }
	string Book_name;
	friend istream& operator>>(istream& s, Book& b);
	friend ostream& operator<<(ostream& s, const Book& b);
	friend bool operator==(Book b1, Book b2);
	Book();
	Book(string name, string genre);
	void ReadBook();
	~Book() {};
	string Genre;
};
