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
    unordered_map<int, Book> getBooks();

    private:
    int userID_ = 0;
    string username_;
    string password_;
    unordered_map<int, Book> books_;

};