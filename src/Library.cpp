/*
@Filename: Library.cpp
implementation of Library

@author: Ykahil
*/
#include "../include/Library.h"
#include <iostream>
using namespace std;
/*
 * convert string to uppercase 
*/
string to_upper(string &in) {
  for (int i = 0; i < in.length(); i++)
    in[i] = in[i] - 'a' + 'A';
  return in;
}

/*
* Checks if s2 has atleast the same letters repeated the same times as s1 and returns true if it does;
* false otherwise
*/
bool containsLetters(string s1, string s2) {
    // this function will be used to broaden the search for books by name in case the name is not exact when searched
    unordered_map<char, int> chars = {};
    // TODO
    // !!!
}
Library::Library() {
    userAccounts_ = {};
    libBooks_ = {};
    bookList_ = {};
}

void Library::addBook(Book book) {
    libBooks_.insert({book.getBookID(), book});
    bookList_.push_back(book.getDetails());
}

void Library::addUser(User user) {
    userAccounts_.insert({user.getUserID(), user});
}

void Library::removeUser(User user) {
    userAccounts_.erase(user.getUserID());
}

void Library::removeBook(Book book) {
    for (int i = 0; i < bookList_.size(); i++) {
        if (bookList_[i] == book.getDetails()) {
            bookList_.erase(bookList_.begin() + i);
            break;
        }
    }
    libBooks_.erase(book.getBookID());
}

vector<string> Library::viewAllBooks() {
    return this->bookList_;
}


vector<string> Library::viewAvailableBooks() {
    vector<string> books = {};
    for (int i = 1; i <= libBooks_.size(); i++) {
        if (!libBooks_[i].getBorrowed()) {
            books.push_back(libBooks_[i].getDetails());
        }
    }
    return books;
}

vector<string> Library::viewFilteredBooks(Genre genre) {
    vector<string> books = {};
    for (int i = 1; i <= libBooks_.size(); i++) {
        if (libBooks_[i].getBookGenre() == genre) {
            books.push_back(libBooks_[i].getDetails());
        }
    }
    return books;
}

vector<string> Library::viewAvailableFilteredBooks(Genre genre) {
    vector<string> books = {};
    for (int i = 1; i <= libBooks_.size(); i++) {
        if (libBooks_[i].getBookGenre() == genre && !libBooks_[i].getBorrowed()) {
            books.push_back(libBooks_[i].getDetails());
        }
    }
    return books;
}

vector<string> Library::getBookByName(string name) {
    vector<string> books = {};
    string book_name = "";
    for (int i = 1; i <= libBooks_.size(); i++) {
        book_name = libBooks_[i].getBookName();
        if (to_upper(book_name) == to_upper(name)) {
            books.push_back(libBooks_[i].getDetails());
        }
    }
    return books;
}

vector<string> Library::viewBookByAuthor(string author) {
    vector<string> books = {};
    string author_name = "";
    for (int i = 1; i <= libBooks_.size(); i++) {
        author_name = libBooks_[i].getBookAuthor();
        if (to_upper(author_name) == to_upper(author)) {
            books.push_back(libBooks_[i].getDetails());
        }
    }
    return books;
}


unordered_map<int, Book>* Library::getlibBooks() {
    return &libBooks_;
}

unordered_map<string, User>* Library::getUsers() {
    return &userAccounts_;
}

Book* Library::getBookByID(int id) {
    return &libBooks_[id];
}

User* Library::getUserByID(string userID) {
    return &userAccounts_[userID];
}
