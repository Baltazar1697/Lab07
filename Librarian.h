#pragma once
#include "User.h"
#include "Library.h"
class Librarian : public User
{
public:
	Librarian();
	Librarian(string name);
	~Librarian() {};
	string getName();
	void Access_to_DB()override;
	void Add_Book(Book* b, Library* L);
	void Delete_Book(Book* b, Library* L);
private:
	string name;
};
