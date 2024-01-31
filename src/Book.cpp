/*
@Filename: Book.cpp
implementation of Book

@author: Ykahil
*/

#include "Book.h"

Book::Book(string name, string author, string genre) {
    name_ = name;
    author_ = author;
    genre_ = genre;
}

string Book::getBookName(){
    return this->name_;
}

string Book::getBookAuthor(){
    return this->author_;
}

string Book::getBookGenre(){
    return this->genre_;
}

