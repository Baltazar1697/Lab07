#include "Library.h"
void Library::list_Storage()
{
	int i = 0;
	for (Book* b : Book_Storage) {
		cout << i << " " << b->Book_name << "  " << b->Genre << endl;
		i++;
	}
}
void Library::list_Storage(vector<Book*> book_st)
{
	int i = 0;
	for (Book* b : book_st) {
		cout << i << " " << b->Book_name << "  " << b->Genre << endl;
		i++;
	}
}
Library::Library()
{
	this->Library_name = "default";
}

Library::Library(string name)
{
	this->Library_name = name;
}

vector<Book*> Library::Find_Informaton(string genre)
{
	vector<Book*> rezulted;
	for (Book* p : Book_Storage) {
		if (p->Genre == genre) {
			rezulted.push_back(p);
		}
	}
	return rezulted;
}
