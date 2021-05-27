#include <iostream>
#include "Library.h"
#include "Librarian.h"
#include "Visitor.h"
using namespace std;

int prg(int size);
void create_and_push(Library* ptr);
void ex(Library lib, Librarian libr, Visitor vis);

Librarian Walhalla("Walhalla");
Visitor Kodyak("Kodyak");

int main()
{
	string Library_name, answer;
	cout << "Welcome to a Library Model v. 1.0" << endl;
	cout << "Please, name your Library" << endl;
	cin >> Library_name;
	Library Blackstone(Library_name), * libpointer = &Blackstone;
	cout << "Congratulations, you made your own Library named " << Blackstone.Library_name << endl << "For now it doesn't have any books." << endl << endl;

	cout << " There are two people in your Library: the Librarian " << Walhalla.getName() << " and the Visitor " << Kodyak.getName() << endl;
	Walhalla.Access_to_DB();

	cout << " Let Walhalla add few books. You must send 'n' to stop adding books" << endl;
	create_and_push(libpointer);

	Blackstone.list_Storage();

	cout << " Walhalla decided to remove one of these books from his Library. He removes the book number... ";
	int temp = prg(Blackstone.Book_Storage.size());

	cout << temp << endl << endl;

	Walhalla.Delete_Book(Blackstone.Book_Storage[temp], libpointer);

	Blackstone.list_Storage();

	cout << endl << " Let's see what " << Kodyak.getName() << " can do..." << endl << endl;
	Kodyak.Access_to_DB();

	temp = prg(Blackstone.Book_Storage.size());

	cout << " Kodyak decided to take book. Let it be the book number..." << temp << endl << endl;
	Kodyak.Take_book(Blackstone.Book_Storage[temp], libpointer);

	cout << " One eternity later Kodyak completed reading his book and he gives it back to a Library." << endl;
	Kodyak.Return_book(libpointer);

	cout << endl << endl << endl << "After all, it had to be done to find special books with a specific genre. Let's find them all." << endl << endl;
	cout << " Write down a specific topic you want to find information about" << endl;

	cin >> answer;
	Blackstone.list_Storage(Blackstone.Find_Informaton(answer));

	//	ex(Blackstone, Walhalla, Kodyak);
	return 0;
}

int prg(int size)
{
	return rand() % size;
}

void create_and_push(Library* ptr)
{
	string answer;
	string name, genre;
	cout << "Add new book" << endl;
	cin >> name;
	cin >> genre;
	Book* bookpointer = new Book(name, genre);
	Walhalla.Add_Book(bookpointer, ptr);
	cout << "Would you like to continue? y/n" << endl;
	cin >> answer;
	if (answer != "n") {
		create_and_push(ptr);
	}
}

void ex(Library lib, Librarian libr, Visitor vis)
{
	lib.~Library();
	vis.~Visitor();
	libr.~Librarian();
	exit(0);
}
