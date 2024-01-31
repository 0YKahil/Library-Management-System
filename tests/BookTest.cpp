#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/Book.h"

/*
EFFECTS: returns the enumeration of genre as a string
*/
string parseGenre(Genre genre) {
    switch (genre) {
        case HORROR: return "HORROR";
        case FANTASY: return "FANTASY";
        case SCI_FI: return "SCI_FI";
        case NON_FICTION: return "NON_FICTION";
        case MYSTERY: return "MYSTERY";
        case ROMANCE: return "ROMANCE";
        case OTHER: return "OTHER";
    }
    return "NONE";
}

Book b1 = Book("book1", "author1", HORROR);
Book b2 = Book("book2", "author2", FANTASY);
Book b3 = Book("book3", "author3", SCI_FI);


TEST_CASE("Test constructor / getters") {
    REQUIRE(b1.getBookName() == "book1");
    REQUIRE(b2.getBookName() == "book2");
    REQUIRE(b3.getBookAuthor() == "author3");

    REQUIRE(b3.getBorrowed() == false);

    REQUIRE(b1.getBookID() == 1001);
    REQUIRE(b2.getBookID() == 1002);
    REQUIRE(b3.getBookID() == 1003);

    REQUIRE(parseGenre(b1.getBookGenre()) == "HORROR");
    REQUIRE(parseGenre(b2.getBookGenre()) == "FANTASY");
    REQUIRE(parseGenre(b3.getBookGenre()) == "SCI_FI");
}

TEST_CASE("Test setters") {
    b1.setBorrowed();
    REQUIRE(b1.getBorrowed() == true);
    b1.setBorrowed();
    REQUIRE(b1.getBorrowed() == true);
    b1.setAvailable();
    REQUIRE(b1.getBorrowed() == false);

    b2.setBookName("new name");
    REQUIRE(b2.getBookName() == "new name");
    b1.setBookAuthor("new author");
    REQUIRE(b1.getBookAuthor() == "new author");

    b1.setBookGenre(OTHER);
    REQUIRE(parseGenre(b1.getBookGenre()) == "OTHER");
}