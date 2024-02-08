/*
File: User.cpp
Implementation of a User

Author: Youssef Kahil
*/

#include "../include/User.h"

User::User() {
    userID_ = "USER";
    password_ = "";
    books_ = {};
}

User::User(string username, string password) {
    userID_ = username;
    password_ = password;
    books_ = {};
}

const string User::getUserName() {
    return userID_;
}

const string User::getUserID() {
    return userID_;
}

const string User::getPassword() {
    return password_;
}

unordered_map<int, Book> User::getBooks() {
    return books_;
}

vector<string> User::getNamesAndAuthors() {
    vector<string> names = {};
    for(auto it = books_.begin(); it != books_.end(); ++it) {
        names.push_back(it->second.getDetails());
    }
    return names;
}

void User::addBook(Book book) {
    if (!book.getBorrowed()) {
        books_.insert({book.getBookID(), book});
        book.setBorrowed();
    }
    
}

void User::removeBook(Book book) {
    books_.erase({book.getBookID()});
}







