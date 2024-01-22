/*
File: User.h
Author: Youssef Kahil
*/
#include <string>
#include <list>
#include "Book.h"
using namespace std;

class User {

    public:
    // Constructs a user given next id 
    // needing a name, password, and empty datablock
    User(string username, string password);

    // getters
    int getUserID();
    string getName();
    string getPassword();
    list<Book> getBooks();

    private:
    int userID = 0;
    string username;
    string password;
    list<Book> books;

};