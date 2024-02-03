/*
File: User.cpp
Implementation of a User

Author: Youssef Kahil
*/

#include "../include/User.h"

// initialize userID with 0
int User::currentUserID_ = 0;
User::User() {
    userID_ = 
}

User::User(string username, string password) {
    userID_ = currentUserID_++;
    username_ = username;
    password_ = password;
    books_ = {};
}

const int User::getUserID() {
    return userID_;
}

const string User::getUserName() {
    return username_;
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
        names.push_back(it->second.getNameAndAuthor());
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







