#pragma once
#include "Book.h"
#include "ReadingRoom.h"
#include <iostream>
#include <string>

class Library
{

public:
	void list_Storage();
	void list_Storage(vector<Book*> book_st);
	string Library_name;
	ReadingRoom readingroom;
	Library()											// Default constructor for library
	{
		this->Library_name = "default";
		this->readingroom = ReadingRoom();
	}
	Library(string name);
	~Library() {};

	vector<Book*> Find_Informaton(string genre);
};
