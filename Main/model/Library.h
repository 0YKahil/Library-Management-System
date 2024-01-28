/*
File: Library.h
Author: Youssef Kahil
*/

#include <string>
#include <vector>
#include <unordered_map>
#include "User.h"

using namespace std;

class Library {
    public:
    // EFFECTS: Constructs a Library with users and user info, and a "library" of books
    // Initializes with an admin user
    Library();

    // MODIFIES: this
    // EFFECTS: Adds a user to the library system
    void addUser(User user);

    // MODIFIES: this
    // EFFECTS: Adds book to the librarys books
    void addBook(Book book);

    // getters
    unordered_map<int, User> getUsers();
    unordered_map<int, Book> getLibBooks();

    // EFFECTS: returns the user from the given id it exists
    User getUserByID(int id);

    // EFFECTS: returns a list of the users with the given name
    vector<User> getUserByName(string name);

    // EFFECTS: returns the book from given id if it exists
    Book getBookByID(int id);

    // EFFECTS: returns the book from given id if it exists
    vector<Book> getBookByName(string name);

    // EFFECTS: returns the books from the given genre as a list of books
    vector<Book> getBooksbyGenre(Genre genre);

    private:
    unordered_map<int, Book> libBooks_;
    unordered_map<int, User> users_;
    

};