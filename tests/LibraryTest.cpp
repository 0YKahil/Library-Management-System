#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/Library.h"

using namespace std;

Library l = Library();

User u1 = User("login1", "pass1");
User u2 = User("login2", "pass2");
User u3 = User("login3", "pass2");

Book b1 = Book("book1", "author1", HORROR);
Book b2 = Book("book2", "author2", FANTASY);
Book b3 = Book("book3", "author3", SCI_FI);

TEST_CASE("Test constructors / getters") {
    REQUIRE(l.getlibBooks().size() == 0);
    REQUIRE(l.getUsers().size() == 0);
}

TEST_CASE("Test addBook/addUser and removeBook/removeUser") {
    REQUIRE(l.getlibBooks().size() == 0);
    REQUIRE(l.getUsers().size() == 0);
    l.addBook(b1);
    REQUIRE(l.getlibBooks().size() == 1);
    REQUIRE(l.getlibBooks()[b1.getBookID()].getBookName() == "book1");   
    l.addUser(u1);
    REQUIRE(l.getUsers().size() == 1);
    REQUIRE(l.getUsers()[u1.getUserID()].getUserName() == "login1");

    l.removeBook(b1);
    l.removeUser(u1);
    l.removeUser(u1);
    REQUIRE(l.getlibBooks().size() == 0);
    REQUIRE(l.getUsers().size() == 0);   
}

TEST_CASE("Test Multiple adding and id indexing in map ") {
    l.addBook(b1);
    l.addBook(b2);
    l.addBook(b3);
    REQUIRE(l.getlibBooks().size() == 3);
    REQUIRE(l.getlibBooks()[b1.getBookID()].getBookName() == "book1");
    REQUIRE(l.getlibBooks()[b2.getBookID()].getBookName() == "book2");
    REQUIRE(l.getlibBooks()[b3.getBookID()].getBookName() == "book3");
    l.removeBook(b2);
    REQUIRE(l.getlibBooks()[b3.getBookID()].getBookName() == "book3");

    l.addUser(u1);
    l.addUser(u2);
    l.addUser(u3);
    REQUIRE(l.getUsers().size() == 3);
    REQUIRE(l.getUsers()[u1.getUserID()].getUserName() == "login1");
    REQUIRE(l.getUsers()[u2.getUserID()].getUserName() == "login2");
    REQUIRE(l.getUsers()[u3.getUserID()].getUserName() == "login3");
    l.removeUser(u1);
    REQUIRE(l.getUsers()[u2.getUserID()].getUserName() == "login2");

    l.removeBook(b1);
    l.removeBook(b3);

    l.removeUser(u2);
    l.removeUser(u3);
    REQUIRE(l.getlibBooks().size() == 0);
    REQUIRE(l.getUsers().size() == 0);   
}

TEST_CASE("Test View Books methods") {
    REQUIRE(l.getlibBooks().size() == 0);

    l.addBook(b1);
    l.addBook(b2);
    l.addBook(b3);

    vector<string> books = l.viewAllBooks();
    REQUIRE(books.size() == 4); // iteration of map creates empty BOOK_
    REQUIRE(books[1] == "1 | book1 | author1");
    REQUIRE(books[2] == "2 | book2 | author2");
    REQUIRE(books[3] == "3 | book3 | author3");

    Book *b = l.getBookByID(1);
    b->setBorrowed();
    vector<string> books2 = l.viewAvailableBooks();
    REQUIRE(books2.size() == 3); // meaning 2 books available
    REQUIRE(books2[1] == "2 | book2 | author2");
    REQUIRE(books2[2] == "3 | book3 | author3");
    b->setAvailable();
}   

TEST_CASE("Test View Filtered Books methods") {
    
    vector<string> books3 = l.viewFilteredBooks(HORROR);
    REQUIRE(books3.size() == 1);
    cout << "reached 95" << endl;
    REQUIRE(books3[0] == "1 | book1 | author1");

    books3 = l.viewFilteredBooks(FANTASY);
    REQUIRE(books3.size() == 1);
    REQUIRE(books3[0] == "2 | book2 | author2");

    Book b4 = Book("book4", "author4", HORROR); // ID 5 after created book from previous test
    l.addBook(b4);
    Book *b = l.getBookByID(1);
    b->setBorrowed();
    vector<string> books4 = l.viewAvailableFilteredBooks(HORROR);
    REQUIRE(books4.size() == 1); // meaning 1 books available
    REQUIRE(books4[0] == "5 | book4 | author4");
}   

