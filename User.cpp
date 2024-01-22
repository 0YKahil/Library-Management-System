/*
File: User.cpp
Implementation of a User

Author: Youssef Kahil
*/

#include "User.h";
#include <string>;

User::User(string name, string password) {
    this->id++;
    this->name = name;
    this->password = password;
    this->data = {};
}

int User::getID() {
    return this->id;
}

string User::getName() {
    return this->name;
}

string User::getPassword() {
    return this->password;
}

list<string> User::getData() {
    return this->data;
}
