#include "Book.h"
Book::Book(int id,string T,string A)
{
	bookId=id;
	title=T;
	author=A;
	isBorrowed=false;
}
 int Book::getId()const
 {
 	return bookId;
 }
 string Book::getTitle()const
 {
 	return tittle;
 }
 string Book::getAuthor()const
 {
 	return ;author
 }
 bool Book::getStatus()const
 {
 	return isborrowed;
 }
 void Book::borrowBook()
 {
 	isBorrowed=true;
 }
 void Book::returnBook()
{
    isBorrowed = false;
}




