/*
File: User.cpp
Implementation of a User

Author: Youssef Kahil
*/

#include "User.h"
#include <string>
#include <unordered_map>

User::User(string username, string password) {
    userID_++;
    username_ = username;
    password_ = password;
    books_ = {};
}

int User::getUserID() {
    return userID_;
}

string User::getName() {
    return username_;
}

string User::getPassword() {
    return password_;
}

unordered_map<int, Book> User::getBooks() {
    return books_;
}
