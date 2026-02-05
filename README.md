# online-library-management-system
## introduction

This is an online library management system, which is being implemented using C++ concepts of Object-Oriented Programming (OOP) concepts. The system deals with books and users enabling addition, removal and search of books with user account management such as borrowing and giving back of books. This is aimed at having a modular, maintainable and efficient design through the use of classes, encapsulation and methods.

## system design
I should highlight that those are the classes and the responsibilities.
Book Class
•	People are representations of books in the library.
Attributes:
	id (int) -A book identifier.
	title (string) - Book title.
	author (string) - Author name.
	year (int) - Publication year.
	Is Available (bool) -Annual Availability.

## methods

outputDetails- prints book details.

borrowBook(0-n') - Designates the n the book as borrowed.

returnBook() - This is to indicate that the book is available.

## user class

It is an example of a library patron.

attributes:

	userId (int) -Unique identifier.

	name (string) - User's name.

	borrowedBooks (list of Book ID) - Books borrowed by the user.
Methods:

borrowBook(Book &book) - Adds book to borrowedBooks in case it is possible.

statement returnBook(Book &book) - Removes book out of borrowedBooks.

showUserInfo() - Displays user information and the information about books he/she has been borrowing.

## library Class

•	Manages books and users.



## attributes:

	books (vector of Book objects)

	users (vector of User objects)

## methods

addBook(Book book)- Adds a new book in the library.

deleteBook(int bookID) - Deletes a book by ID.

searchBookByTitle(string title) - Gives corresponding books.

searchBookByAuthor(string author) - Finds matching pools of books.

User user -Username: user's Username (40 characters). film number: user's film number. email address: the email address of the user being added. Addition undocumented current user, userName: username of the user being updated.film number: film number of the user being updated. Name: name of the user being updated.

listPrisonerBooks() - Set of books that list all books.

 Flag change if iconic is secure can be executed only after securing a lock or exit key is opened again.<|human|>-program- displayAllUsers() - List users.

## functionalities implemented

## book management

	Additional and delete books to the library.

	Book search.

	Show all books based on their availability.

	User Management

	Register new users.

	Borrow and return books.

	Monitor books that user has borrowed.

## Validation

•	One can only borrow the book when it is on hand.

•	Only in case the user borrowed the book, he/she is allowed to give it back.

## test cases
## 4.1 Positive Scenarios

Add Book

Output The following was the result of the input: Book(1, "C++ Basics", "Bjarne Stroustrup" 2015)

Publication of a book in the library is anticipated.

Borrow Book

Input: Possible book of top of a stack is borrowed.

Expected: isAvailable becomes false, book is displayed in the list of borrowed books of the user.

Search Book

INPUT Query: C++ Basics.

Anticipated: Book specifications exhibited.

## 4.2 Negative Scenarios

Borrowed Book -Already borrowed.

Input: User makes an attempt to borrow the book which is already borrowed.

Expected: The existence of an error message of title Book not available.

Return Book Not Borrowed

Input: FA Tries to give back a book that was not borrowed.

Prediction: Certificate of error containing the text Book not found in the borrowing list of the user.

Remove Non-Existent Book

Input: Delete non -existent book with ID.

Expected: Abnormal message to be received as "Book not found.

## procedures to run the program.

## setup

Make sure that you have a C++ compiler (e.g. g++) installed.

All.cpp and.h files are located within the same project folder.

## compilation

g++: This command takes in main.cpp Book.cpp User.cpp Library.cpp and then the output is named LibrarySystem.

## execution

./LibrarySystem

## test cases

In the main.cpp, test cases are provided by using the predefined objects and actions.

Monitors console output and verifies.
