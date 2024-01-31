/*
@Filename: Book.h
@author: Ykahil
*/
#include <string>

using namespace std;

class Book {
    public:
    /*
    Constructs a new Book object with a given name, author, genre, and automatically assigns
    the next id to it
    */
    Book(string name, string author, string genre);

    // getters
    string getBookName();
    string getBookAuthor();
    string getBookGenre();


    private:
    string name_;
    string author_;
    string genre_;
};