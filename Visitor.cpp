#include "Visitor.h"

Visitor::Visitor()
{
    this->name = "default";
}

string Visitor::getName()
{
    return this->name;
}

Visitor::Visitor(string name)
{
    this->name = name;
}

void Visitor::Access_to_DB()
{
    cout << this->name << " granted acces as a visitor. Welcome.";
}

void Visitor::Take_book(Book* b, Library* L)
{
    if (Owned_book == nullptr) {
        Owned_book = b;
        cout << " You have taken the book named " << b->Book_name << " " << b->Genre << endl;
        int i = 0;
        Book* t;
        while (i != L->Book_Storage.size()) {
            t = L->Book_Storage[i];
            if (t == b) {
                L->Book_Storage.erase(L->Book_Storage.begin() + i);
            }
            else {
                i++;
            }
        }
    }
}

void Visitor::Return_book(Library* L)
{
    if (Owned_book != nullptr) {
        L->Book_Storage.push_back(Owned_book);
        cout << "You have returned the book named " << Owned_book->Book_name << " " << Owned_book->Genre << endl;
        Owned_book = nullptr;

    }
}
