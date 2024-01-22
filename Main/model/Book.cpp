/*
File: Book.cpp
Implementation of Book, Book IDs start with 1

Author: Youssef Kahil
*/
#include <string>
#include "Book.h"

Book::Book(string bookName, string author, Genre genre) {
    this->bookID++;
    this->bookName = bookName;
    this->author = author;
    this->genre = genre;
    this->borrowed = false;
}

int Book::getBookID() {
    return this->bookID;
}

string Book::getBookName() {
    return this->bookName;
}

string Book::getAuthor() {
    return this->author;
}

Genre Book::getGenre() {
    return this->genre;
}

bool Book::getBorrowed() {
    return this->borrowed;
}
