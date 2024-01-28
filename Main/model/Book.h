/*
File: Book.h
Author: Youssef Kahil
*/
#include <string>
#include <list>

using namespace std;

enum Genre {
        HORROR, FANTASY, SCI_FI, NON_FICTION, MYSTERY, ROMANCE, OTHER
    };

class Book {
    public:    
    // Constructs a Book with the next id, given name, author, and genre (one of )
    Book(string bookName, string author, Genre genre);
    
    // getters
    int getBookID();
    string getBookName();
    string getAuthor();
    Genre getGenre();
    bool getBorrowed();

    // setters
    void setBorrowed();
    void setAvailable();
    void setBookName(string name);
    void setBookAuthor(string author);
    void setBookGenre(Genre genre);
    
    private:

    int bookID_ = 1000;
    bool borrowed_;
    string bookName_;
    string author_;
    Genre genre_;

};