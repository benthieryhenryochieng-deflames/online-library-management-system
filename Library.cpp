#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "Book.h"
#include "User.h"

class Library {
private:
    vector<Book> books;
    vector<User> users;

public:
    void addBook(Book book);
    void removeBook(int bookId);
    void addUser(User user);

    Book* searchBookByTitle(string title);
    Book* searchBookById(int bookId);

    bool borrowBook(int bookId);
    bool returnBook(int bookId);

    void displayBooks();
};

#endif

