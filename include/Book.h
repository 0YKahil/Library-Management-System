/*
@Filename: Book.h
@author: Ykahil
*/
#include <string>

using namespace std;

enum Genre {
        HORROR, FANTASY, SCI_FI, NON_FICTION, MYSTERY, ROMANCE, OTHER
    };


class Book {
    public:
        /*
        Constructs a new Book object with a given name, author, genre, automatically assigns
        the next available id to it (book ids begin at 1), and sets its borrowed status to false
        */
        Book(string name, string author, Genre genre);

        /*
        Constructs a new book with defaulted empty name and author and genre other
        */
        Book();

        // getters
        int getBookID();
        bool getBorrowed();
        string getBookName();
        string getBookAuthor();
        Genre getBookGenre();
        string getNameAndAuthor();
        
        // setters
        void setBorrowed();
        void setAvailable();
        void setBookName(string name);
        void setBookAuthor(string author);
        void setBookGenre(Genre genre);
    

    private:
        static int currentBookID_;
        int bookID_;
        bool borrowed_;
        string name_;
        string author_;
        Genre genre_;

};