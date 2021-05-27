#pragma once
#include "Book.h"
#include <iostream>
#include <string>
#include <vector>
class Library
{

public:
	void list_Storage();
	void list_Storage(vector<Book*> book_st);
	string Library_name;
	Library();
	Library(string name);
	~Library() {};
	vector<Book*> Book_Storage;
	vector<Book*> Find_Informaton(string genre);
};
