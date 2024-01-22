/*
File: User.cpp
Implementation of a User

Author: Youssef Kahil
*/

#include "User.h"
#include <string>

User::User(string username, string password) {
    this->userID++;
    this->username = username;
    this->password = password;
    this->books = {};
}

int User::getUserID() {
    return this->userID;
}

string User::getName() {
    return this->username;
}

string User::getPassword() {
    return this->password;
}

list<Book> User::getBooks() {
    return this->books;
}
