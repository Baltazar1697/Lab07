#include "Library.h"

void Library::list_Storage()
{
	int i = 0;
	for (Book* b : Book_Storage) {								// Just in loop cout every book name and it's genre
		cout << i << " " << b->Book_name << "  " << b->Genre << endl;
		i++;
	}
}

void Library::list_Storage(vector<Book*> book_st)			// Simple visualising the current state of library storage
{
	int i = 0;
	for (Book* b : book_st) {								// Just in loop cout every book name and it's genre
		cout << i << " " << b->Book_name << "  " << b->Genre << endl;
		i++;
	}
}
Library::Library()											// Default constructor for library
{
	this->Library_name = "default";
}

Library::Library(string name) 								// Constructor with argument
{
	this->Library_name = name;
}

vector<Book*> Library::Find_Informaton(string genre)		// Select books with specified genre
{
	vector<Book*> rezulted;
	for (Book* p : Book_Storage) {							// Just in loop look for the needed genre
		if (p->Genre == genre) {
			rezulted.push_back(p);
		}
	}
	return rezulted;
}
