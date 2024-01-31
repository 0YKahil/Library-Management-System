/*
@Filename: Book.cpp
implementation of Book

@author: Ykahil
*/

#include "../include/Book.h"

// initialize BookID with 1000
int Book::currentBookID_ = 1000;

Book::Book(string name, string author, Genre genre) {
    bookID_ = ++currentBookID_;
    name_ = name;
    author_ = author;
    genre_ = genre;
    borrowed_ = false;
}

string Book::getBookName(){
    return this->name_;
}

string Book::getBookAuthor(){
    return this->author_;
}

Genre Book::getBookGenre(){
    return this->genre_;
}

bool Book::getBorrowed() {
    return this->borrowed_;
}

 int Book::getBookID() {
    return this->bookID_;
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
    name_ = name;
}

void Book::setBookAuthor(string author) {
    author_ = author;
}

void Book::setBookGenre(Genre genre) {
    genre_ = genre;
}

