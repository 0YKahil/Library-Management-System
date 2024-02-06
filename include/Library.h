/*
@Filename: Library.h
@author: Ykahil
*/
#include "../include/User.h"
#include <vector>

using namespace std;

class Library {

    public:
        /*
        * Constructs a library with an empty collection of user accounts and empty library of books
        */
        Library();

        /*
        * MODIFIES: this
        * EFFECTS: adds a book to the library if its id does not already exist
        */
        void addBook(Book book);

        /*
        * MODIFIES: this
        * EFFECTS: adds a user to the library if its id does not already exist
        */
        void addUser(User user);

        /*
        * MODIFIES: this
        * EFFECTS: removes a book from the library if it exists
        */
        void removeBook(Book book);

        /*
        * MODIFIES: this
        * EFFECTS: removes a user from the library if it exists
        */
        void removeUser(User user);

        /*
        * EFFECTS: returns all the names of the books in the library with their ids
        * in the format ID | NAME | AUTHOR
        */
        vector<string> viewAllBooks();

        /*
        * EFFECTS: returns all the names of the non borrowed books in the library with their ids 
        * in the format ID | NAME | AUTHOR
        */
        vector<string> viewAvailableBooks();

        /*
        * EFFECTS: returns all the names of the books of the given genre in the library with their ids
        * in the format ID | NAME | AUTHOR
        */
        vector<string> viewFilteredBooks(Genre genre);

        /*
        * EFFECTS: returns all the names of the available books of the given genre in the library with their ids
        * in the format ID | NAME | AUTHOR
        */
        vector<string> viewAvailableFilteredBooks(Genre genre);

        /*
        * EFFECTS: returns all the books with the given name in the format ID | NAME| AUTHOR
        */
        vector<string> viewBookByName(string name);

        /*
        * EFFECTS: returns all the books with the given author in the format ID | NAME| AUTHOR
        */
        vector<string> viewBookByAuthor(string author);


        // getters
        unordered_map<int, Book> getlibBooks();
        unordered_map<int, User> getUsers();
        Book* getBookByID(int id);
        User* getUserByID(int id);

        // TODO: Implement these
        // !!!
        vector<User> getUserByName(string name);

    private:
        unordered_map<int, User> userAccounts_;
        unordered_map<int, Book> libBooks_;

};