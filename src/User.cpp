/*
File: User.cpp
Implementation of a User

Author: Youssef Kahil
*/

#include "../include/User.h"

User::User() {
    _userID = "USER";
    _password = "";
    _books = {};
}

User::User(string username, string password) {
    _userID = username;
    _password = password;
    _books = {};
}

const string User::getUserName() {
    return _userID;
}

const string User::getUserID() {
    return _userID;
}

const string User::getPassword() {
    return _password;
}

unordered_map<int, Book> User::getBooks() {
    return _books;
}

vector<string> User::getNamesAndAuthors() {
    vector<string> names = {};
    for(auto it = _books.begin(); it != _books.end(); ++it) {
        names.push_back(it->second.getDetails());
    }
    return names;
}

void User::addBook(Book book) {
    if (!book.getBorrowed()) {
        _books.insert({book.getBookID(), book});
        book.setBorrowed();
    }
    
}

void User::removeBook(Book book) {
    _books.erase({book.getBookID()});
}







