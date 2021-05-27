#include "Visitor.h"

Visitor::Visitor()                                                  // Default consructor for Visitor
{
    this->name = "default";
}

string Visitor::getName()                                           // Name getter
{
    return this->name;
}

Visitor::Visitor(string name)                                       // Constructor with argument
{
    this->name = name;
}

void Visitor::Access_to_DB()                                        // Polymorhed function 
{
    cout << " " << this->name << " granted acces as a visitor. Welcome.";
}

void Visitor::Take_book(Book* b, Library* L)                        // Main fucntion of any visitor
{
    if (Owned_book == nullptr) {
        Owned_book = b;                                             // Visitor gets the book
        cout << " You have taken the book named " << b->Book_name << " " << b->Genre << endl;
        int i = 0;
        Book* t;
        while (i != L->Book_Storage.size()) {                       // In the loop he searches for this book
            t = L->Book_Storage[i];
            if (t == b) {
                L->Book_Storage.erase(L->Book_Storage.begin() + i); // And remove it from the library storage
            }
            else {
                i++;
            }
        }
    }
}

void Visitor::Return_book(Library* L)                               //Function for Returning book
{
    if (Owned_book != nullptr) {
        L->Book_Storage.push_back(Owned_book);                      //Pushing the book to the library storage
        cout << "You have returned the book named " << Owned_book->Book_name << " " << Owned_book->Genre << endl;
        Owned_book = nullptr;                                       // Remove it from visitor

    }
    else {
        cout << " You don't have any book to return!";
    }
}
