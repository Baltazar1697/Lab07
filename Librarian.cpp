#include "Librarian.h"

Librarian::Librarian()											// Default constructor 
{
	this->name = "default";
}

Librarian::Librarian(string name)								// Constructor with argument
{
	this->name = name;
}

string Librarian::getName()										// Name getter
{
	return this->name;
}

void Librarian::Access_to_DB()									// Polymorhed function 
{
	cout << " " << this->name << " granted acces as a Librarian. Welcome." << endl;
}

void Librarian::Add_Book(Book* b, Library* L)					// Librarian special function to add books in Library storage
{
	L->readingroom.Book_Storage.push_back(b);
	cout << " Book named " << b->Book_name << " was added to the Library" << endl;

}

void Librarian::Delete_Book(Book* b, Library* L)				// Librarian speacial function to remove books from Library storage
{
	int i = 0;
	Book* t;
	while (i != L->readingroom.Book_Storage.size()) {						// Just look for book in storage in loop
		t = L->readingroom.Book_Storage[i];
		if (t == b) {
			L->readingroom.Book_Storage.erase(L->readingroom.Book_Storage.begin() + i); // And simply erase/remove it from Library storage
			cout << "The book named " << t->Book_name << " was removed from the Library." << endl;
		}
		else {
			i++;
		}
	}
}
