/*
@Filename: Library.cpp
implementation of Library

@author: Ykahil
*/
#include "../include/Library.h"

/*
 * Helper function to convert strings to uppercase 
*/
string to_upper(string &in) {
  for (int i = 0; i < in.length(); i++)
    in[i] = in[i] - 'a' + 'A';
  return in;
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
    libBooks_.erase(book.getBookID());
    vector<string>s* books = &bookList_;
    for (int i = 0; i < books->size(); i++) {
        if ((*books)[i] == book.getDetails()) {
            // bookList_.erase();
            break;
        }
    }
}

vector<string> Library::viewAllBooks() {
    return bookList_;
}

// TODO: FIX THIS
// !!!
vector<string> Library::viewAvailableBooks() {
    vector<string> books = {};
    for (int i = 0; i < libBooks_.size(); i++) {
        if (!libBooks_[i].getBorrowed()) {
            books.push_back(libBooks_[i].getDetails());
        }
    }
    return books;
}

vector<string> Library::viewFilteredBooks(Genre genre) {
    vector<string> books = {};
    for (int i = 0; i < libBooks_.size(); i++) {
        if (libBooks_[i].getBookGenre() == genre) {
            books.push_back(libBooks_[i].getDetails());
        }
    }
    return books;
}

vector<string> Library::viewAvailableFilteredBooks(Genre genre) {
    vector<string> books = {};
    for (int i = 0; i < libBooks_.size(); i++) {
        if (libBooks_[i].getBookGenre() == genre && !libBooks_[i].getBorrowed()) {
            books.push_back(libBooks_[i].getDetails());
        }
    }
    return books;
}

vector<string> Library::viewBookByName(string name) {
    vector<string> books = {};
    string book_name = "";
    for (int i = 0; i < libBooks_.size(); i++) {
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
    for (int i = 0; i < libBooks_.size(); i++) {
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
