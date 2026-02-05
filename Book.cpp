#ifndef Book_H
#define Book_H
#include<string>
using namespace std;
class Book
{
private://book information should not be changed directly
	int bookId;
	string title;
	string author;
	bool isborrowed;

public:
	book(int id,string T,string A);
	
	int getId()const;
	string getTitle()const;
	string getAuthor()const;
	bool getStatus()const;
	
    void borrowBook();
    void returnBook();

}

#endif
