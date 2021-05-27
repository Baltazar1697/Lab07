#include "Librarian.h"

Librarian::Librarian()
{
	this->name = "default";
}

Librarian::Librarian(string name)
{
	this->name = name;
}

string Librarian::getName()
{
	return this->name;
}

void Librarian::Access_to_DB()
{
	cout << this->name << " granted acces as a Librarian. Welcome." << endl;
}

void Librarian::Add_Book(Book* b, Library* L)
{
	L->Book_Storage.push_back(b);
	cout << "Book named " << b->Book_name << " was added to the Library" << endl;

}

void Librarian::Delete_Book(Book* b, Library* L)
{
	int i = 0;
	Book* t;
	while (i != L->Book_Storage.size()) {
		t = L->Book_Storage[i];
		if (t == b) {
			L->Book_Storage.erase(L->Book_Storage.begin() + i);
			cout << "The book named " << t->Book_name << " was removed from the Library." << endl;
		}
		else {
			i++;
		}
	}
}
