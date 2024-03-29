#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/User.h"

using namespace std;

User u = User("login1", "pass1");
User u2 = User("login2", "pass2");
User u3 = User("login3", "pass2");

Book b1 = Book("book1", "author1", HORROR);
Book b2 = Book("book2", "author2", FANTASY);
Book b3 = Book("book3", "author3", SCI_FI);

TEST_CASE("Test constructor id incrementation / getters") {
    REQUIRE(u.getUserID() == "login1");
    REQUIRE(u2.getUserID() == "login2");
    REQUIRE(u3.getUserID() == "login3");

    REQUIRE(u.getUserName() == "login1");
    REQUIRE(u.getPassword() == "pass1");
    REQUIRE(u.getBooks().size() == 0);

}

TEST_CASE("Test addBook / removeBook") {
    REQUIRE(u.getBooks().size() == 0);
    u.addBook(b1);
    REQUIRE(u.getBooks().size() == 1);
    REQUIRE( "book1" == "book1" );
    REQUIRE(u.getBooks()[b1.getBookID()].getBookName() == "book1");
    u.removeBook(b1);
    REQUIRE(u.getBooks().size() == 0);
}

TEST_CASE("Test addBook / removeBook MULTIPLE") {
    u.addBook(b1);
    u.addBook(b2);
    u.addBook(b3);
    u.addBook(b1);
    REQUIRE(u.getBooks().size() == 3);
    REQUIRE(u.getBooks()[b1.getBookID()].getBookName() == "book1");
    REQUIRE(u.getBooks()[b2.getBookID()].getBookName() == "book2");
    REQUIRE(u.getBooks()[b3.getBookID()].getBookName() == "book3");

    u.removeBook(b1);
    u.removeBook(b2);
    REQUIRE(u.getBooks().size() == 1);
    u.removeBook(b3);
    REQUIRE(u.getBooks().size() == 0);
}

TEST_CASE("Test getNamesAndAuthors") {
    REQUIRE(u.getNamesAndAuthors().size() == 0);
    u.addBook(b1);
    REQUIRE(u.getNamesAndAuthors().size() == 1);
    REQUIRE(u.getNamesAndAuthors()[0] == "1 | book1 | author1");
    u.removeBook(b1);
    REQUIRE(u.getNamesAndAuthors().size() == 0);
}

TEST_CASE("Test getNamesAndAuthors MULTIPLE") {
    u.removeBook(b1);
    cout << u.getBooks().size() << "< here" << endl;
    REQUIRE(u.getBooks().size() == 0);
    REQUIRE(u.getNamesAndAuthors().size() == 0);
    u.addBook(b1);
    u.addBook(b2);
    u.addBook(b3);
    for (int i = 0; i < u.getNamesAndAuthors().size(); i++) {
        cout << u.getNamesAndAuthors()[i] << "< here" << endl;
    }
    REQUIRE(u.getNamesAndAuthors()[2] == "1 | book1 | author1");
    REQUIRE(u.getNamesAndAuthors()[1] == "2 | book2 | author2");
    REQUIRE(u.getNamesAndAuthors()[0] == "3 | book3 | author3");
}



