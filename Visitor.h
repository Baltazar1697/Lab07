#pragma once
#include "User.h"
#include "Library.h"
class Visitor : public User {
public:
    Visitor();
    string getName();
    Visitor(string name);
    ~Visitor() {};
    void Access_to_DB()override;
    void Take_book(Book* b, Library* L);
    void Return_book(Library* L);
protected:
    string name;
    Book* Owned_book;

};
