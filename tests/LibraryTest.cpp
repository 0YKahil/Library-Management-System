#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/Library.h"
using namespace std;

Library l = Library();
unordered_map<int, Book>* lib;
unordered_map<string, User>* users;

User u1 = User("login1", "pass1");
User u2 = User("login2", "pass2");
User u3 = User("login3", "pass2");

Book b1 = Book("book1", "author1", HORROR);
Book b2 = Book("book2", "author2", FANTASY);
Book b3 = Book("book3", "author3", SCI_FI);
Book b4 = Book("book4", "author4", FANTASY);

TEST_CASE("Test constructors / getters") {
    lib = l.getlibBooks();
    users = l.getUsers();
    REQUIRE(lib->size() == 0);
    REQUIRE(users->size() == 0);
}

TEST_CASE("Test addBook/addUser and removeBook/removeUser") {
    lib = l.getlibBooks();
    users = l.getUsers();
    REQUIRE(lib->size() == 0);
    REQUIRE(users->size() == 0);
    l.addBook(b1);
    REQUIRE(lib->size() == 1);
    REQUIRE((*lib)[b1.getBookID()].getBookName() == "book1");   
    l.addUser(u1);
    REQUIRE(users->size() == 1);
    REQUIRE((*users)[u1.getUserID()].getUserName() == "login1");

    l.removeBook(b1);
    l.removeUser(u1);
    l.removeUser(u1);
    REQUIRE(lib->size() == 0);
    REQUIRE((*users).size() == 0);   
}

TEST_CASE("Test Multiple adding and id indexing in map") {
    l.addBook(b1);
    l.addBook(b2);
    l.addBook(b3);
    REQUIRE(lib->size() == 3);
    REQUIRE((*lib)[b1.getBookID()].getBookName() == "book1");
    REQUIRE((*lib)[b2.getBookID()].getBookName() == "book2");
    REQUIRE((*lib)[b3.getBookID()].getBookName() == "book3");
    l.removeBook(b2);
    REQUIRE((*lib)[b3.getBookID()].getBookName() == "book3");

    l.addUser(u1);
    l.addUser(u2);
    l.addUser(u3);
    REQUIRE((*users).size() == 3);
    REQUIRE((*users)[u1.getUserID()].getUserName() == "login1");
    REQUIRE((*users)[u2.getUserID()].getUserName() == "login2");
    REQUIRE((*users)[u3.getUserID()].getUserName() == "login3");
    l.removeUser(u1);
    REQUIRE((*users)[u2.getUserID()].getUserName() == "login2");

    l.removeBook(b1);
    l.removeBook(b3);

    l.removeUser(u2);
    l.removeUser(u3);
    REQUIRE(lib->size() == 0);
    REQUIRE((*users).size() == 0);   
}

TEST_CASE("Test view book methods") {
    lib = l.getlibBooks();
    users = l.getUsers();

    REQUIRE(lib->size() == 0);

    l.addBook(b1);
    l.addBook(b2);
    l.addBook(b3);

    REQUIRE(l.viewAllBooks().size() == 3);
    REQUIRE(l.viewAllBooks()[0] == "1 | book1 | author1");
    l.removeBook(b2);
    REQUIRE(l.viewAllBooks().size() == 2);
    REQUIRE(lib->size() == 2);
    REQUIRE(l.viewAllBooks()[1] == "3 | book3 | author3");

    l.addBook(b2);
    REQUIRE(l.viewAllBooks()[1] == "3 | book3 | author3");
    REQUIRE(l.viewAllBooks()[2] == "2 | book2 | author2");

    l.removeBook(b1);
    l.removeBook(b2);
    l.removeBook(b3);
}

TEST_CASE("Test viewAvailableBook methods") {
    lib = l.getlibBooks();
    REQUIRE(lib->size() == 0);

    l.addBook(b1);
    l.addBook(b2);
    l.addBook(b3);

    l.getBookByID(1)->setBorrowed();
    REQUIRE(l.viewAvailableBooks().size() == 2);
    REQUIRE(l.viewAvailableBooks()[0] == "2 | book2 | author2");

    l.getBookByID(2)->setBorrowed();
    l.getBookByID(3)->setBorrowed();
    REQUIRE(l.viewAvailableBooks().size() == 0);

    l.getBookByID(1)->setAvailable();
    l.getBookByID(2)->setAvailable();
    l.getBookByID(3)->setAvailable();

}

TEST_CASE("Test viewFilteredBooks methods") {
    lib = l.getlibBooks();
    REQUIRE(lib->size() == 3);

    REQUIRE(l.viewFilteredBooks(HORROR).size() == 1);
    REQUIRE(l.viewFilteredBooks(HORROR)[0] == "1 | book1 | author1");

    l.addBook(b4);
    REQUIRE(l.viewFilteredBooks(FANTASY).size() == 2);
    REQUIRE(l.viewFilteredBooks(FANTASY)[0] == "2 | book2 | author2");
    REQUIRE(l.viewFilteredBooks(FANTASY)[1] == "4 | book4 | author4");
}

TEST_CASE("Test viewAvailableFilteredBooks methods") {
    lib = l.getlibBooks();
    REQUIRE(lib->size() == 4);

    REQUIRE(l.viewAvailableFilteredBooks(HORROR).size() == 1);
    REQUIRE(l.viewAvailableFilteredBooks(HORROR)[0] == "1 | book1 | author1");

    l.getBookByID(b2.getBookID())->setBorrowed();
    REQUIRE(l.viewAvailableFilteredBooks(FANTASY).size() == 1);
    REQUIRE(l.viewAvailableFilteredBooks(FANTASY)[0] == "4 | book4 | author4");
}

