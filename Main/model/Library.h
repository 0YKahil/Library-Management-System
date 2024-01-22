/*
File: Library.h
Author: Youssef Kahil
*/

#include <string>
#include "User.h"

using namespace std;

class Library {

    public:
    // EFFECTS: Constructs a Library with users and user info, and a "library" of books
    Library();

    // MODIFIES: this
    // EFFECTS: Adds a user to the library system
    void addUser();

    // MODIFIES: this
    // EFFECTS: Adds book to the librarys books
    void addBook(Book book);

    // getters
    list<User> getUsers;
    list<Book> getLibBooks;

    // EFFECTS: returns the user from the given id it exists
    User getUserByID();

    // EFFECTS: returns a list of the users with the given name
    list<User> getUserByName();

    // EFFECTS: returns the book from given id if it exists
    Book getBookByID();

    // EFFECTS: returns the books from the given genre as a list of books
    list<Book> getBooksbyGenre(Genre genre);


    private:
    list<User> users;
    list<Book> libBooks;

};