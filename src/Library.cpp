/*
@Filename: Library.cpp
implementation of Library

@author: Ykahil
*/
#include "../include/Library.h"

Library::Library() {
    userAccounts_ = {};
    libBooks_ = {};
}

void Library::addBook(Book book) {
    if (libBooks_.find(book.getBookID()) != libBooks_.end()) {
        libBooks_.insert({book.getBookID(), book});
    }
}

void Library::addUser(User user) {
    if (userAccounts_.find(user.getUserID()) != userAccounts_.end()) {
        userAccounts_.insert({user.getUserID(), user});
    }
}

void Library::removeUser(User user) {
    if (userAccounts_.find(user.getUserID()) != userAccounts_.end()) {
        libBooks_.erase(user.getUserID());
    }
}

void Library::removeBook(Book book) {
    if (libBooks_.find(book.getBookID()) != libBooks_.end()) {
        libBooks_.erase(book.getBookID());
    }

}

vector<string> Library::viewAllBooks() {
    vector<string> books = {};
    for (int i = 0; i < libBooks_.size(); i++) {
        books.push_back(libBooks_[i].getNameAndAuthor());
    }
    return books;
}

vector<string> Library::viewAvailableBooks() {
    vector<string> books = {};
    for (int i = 0; i < libBooks_.size(); i++) {
        if (!libBooks_[i].getBorrowed()) {
            books.push_back(libBooks_[i].getNameAndAuthor());
        }
    }
    return books;
}

vector<string> Library::viewFilteredBooks(Genre genre) {
    vector<string> books = {};
    for (int i = 0; i < libBooks_.size(); i++) {
        if (libBooks_[i].getBookGenre() == genre) {
            books.push_back(libBooks_[i].getNameAndAuthor());
        }
    }
    return books;
}

vector<string> Library::viewAvailableFilteredBooks(Genre genre) {
    vector<string> books = {};
    for (int i = 0; i < libBooks_.size(); i++) {
        if (libBooks_[i].getBookGenre() == genre && !libBooks_[i].getBorrowed()) {
            books.push_back(libBooks_[i].getNameAndAuthor());
        }
    }
    return books;
}

unordered_map<int, Book> Library::getlibBooks() {
    return this->libBooks_;
}

unordered_map<int, User> Library::getUsers() {
    return this->userAccounts_;
}

Book Library::getBookByID(int id) {
    return libBooks_[id];
}

User Library::getUserByID(int id) {
    return userAccounts_[id];
}

