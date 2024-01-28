/*
File: Book.cpp
Implementation of Book, Book IDs start with 1

Author: Youssef Kahil
*/
#include <string>
#include "Book.h"

Book::Book(string name, string author, Genre genre) {
    bookID_++;
    bookName_ = name;
    author_ = author;
    genre_ = genre;
    borrowed_ = false;
}

int Book::getBookID() {
    return bookID_;
}

string Book::getBookName() {
    return bookName_;
}

string Book::getAuthor() {
    return author_;
}

Genre Book::getGenre() {
    return genre_;
}

bool Book::getBorrowed() {
    return borrowed_;
}

void Book::setBorrowed() {
    if (borrowed_ != true){
        borrowed_ = true;
    }   
}

void Book::setAvailable() {
    if (borrowed_ != false){
        borrowed_ = false;
    }   
}

void Book::setBookName(string name) {
    bookName_ = name;
}

void Book::setBookAuthor(string author) {
    author_ = author;
}

void Book::setBookGenre(Genre genre) {
    genre_ = genre;
}

