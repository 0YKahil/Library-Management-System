/*
@Filename: main.cpp
@author: Ykahil
*/
#include "Book.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Library" << endl;
    
    int i = 1;
    Book b = Book("testName", "testAuthor", "testGenre");

    cout << "reached end " << i << endl;
}