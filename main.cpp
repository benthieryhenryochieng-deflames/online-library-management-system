#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library library;

    // Add books
    library.addBook(Book(1, "C++ Programming", "Bjarne Stroustrup"));
    library.addBook(Book(2, "Data Structures", "Mark Weiss"));

    // Add users
    library.addUser(User(101, "Alice"));
    library.addUser(User(102, "Bob"));

    cout << "Initial Books:\n";
    library.displayBooks();

    // Borrow book (positive test)
    cout << "\nBorrowing Book ID 1:\n";
    if (library.borrowBook(1))
        cout << "Book borrowed successfully\n";
    else
        cout << "Borrow failed\n";

    // Borrow already borrowed book (negative test)
    cout << "\nBorrowing Book ID 1 again:\n";
    if (!library.borrowBook(1))
        cout << "Borrow failed as expected\n";

    // Return book
    cout << "\nReturning Book ID 1:\n";
    library.returnBook(1);

    cout << "\nFinal Books:\n";
    library.displayBooks();

    return 0;
}

