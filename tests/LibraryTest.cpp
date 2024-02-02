#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/Library.h"

using namespace std;

Library l = Library();

User u = User("login1", "pass1");
User u2 = User("login2", "pass2");
User u3 = User("login2", "pass2");

Book b1 = Book("book1", "author1", HORROR);
Book b2 = Book("book2", "author2", FANTASY);
Book b3 = Book("book3", "author3", SCI_FI);

TEST_CASE("Test constructors / getters") {


}