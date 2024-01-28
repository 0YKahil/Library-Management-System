#include "Library.h"

Library::Library() {
    libBooks_ = {};
    users_ = {};
}


void Library::addUser(User user) {
    users_.insert({user.getUserID(), user});

}

void Library::addBook(Book book) {
    libBooks_.insert({book.getBookID(), book});
}

unordered_map<int, User> Library::getUsers() {
    return this->users_;
}

unordered_map<int, Book> Library::getLibBooks() {
    return this->libBooks_;
}

User Library::getUserByID(int id) {
    return this->users_[id];
}

vector<User> Library::getUserByName(string name) {
    vector<User> userList = {};
    for (int i = 0; i < users_.size(); i++) {
        if (users_[i].getName() == name) {
            userList.push_back(users_[i]);
        }
    }
    return userList;
}

Book Library::getBookByID(int id) {
    return libBooks_[id];
}

vector<Book> Library::getBookByName(string name) {
    vector<Book> bookList = {};
    for (int i = 0; i < libBooks_.size(); i++) {
        if (libBooks_[i].getBookName() == name) {
            bookList.push_back(libBooks_[i]);
        }
    }
    return bookList;
}

vector<Book> Library::getBooksbyGenre(Genre genre) {
    vector<Book> bookList = {};
    for (int i = 0; i < libBooks_.size(); i++) {
        if (libBooks_[i].getGenre() == genre) {
            bookList.push_back(libBooks_[i]);
        }
    }
    return bookList;
}




