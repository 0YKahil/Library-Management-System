#include <iostream>
#include <string>
#include <unordered_map>
#include "../include/Library.h"
using namespace std;


int main() {
    Library l = Library();
    unordered_map<int, Book>* lib;
    unordered_map<string, User>* users;

    User u1 = User("login1", "pass1");
    User u2 = User("login2", "pass2");
    User u3 = User("login3", "pass2");

    Book b1 = Book("book1", "author1", HORROR);
    Book b2 = Book("book2", "author2", FANTASY);
    Book b3 = Book("book3", "author3", SCI_FI);

    lib = l.getlibBooks();
    users = l.getUsers();

    cout << "Initial size (0): " << lib->size() << endl;
    l.addBook(b1);
    l.addBook(b2);
    l.addBook(b3);

    cout << "Post adding size (3): " << lib->size() << l.viewAllBooks().size() << endl;

    cout << "First book name: " << l.viewAllBooks()[0] << endl;

    cout << "REMOVING B2..." << endl;
    l.removeBook(b2);
    cout << "B2 REMOVED" << endl;

    cout << "Post removing size (2): " << lib->size() << l.viewAllBooks().size() << endl;

    cout << "after removal of b2" << endl;
    for (int i = 0; i < l.viewAllBooks().size(); i++) {
        cout << l.viewAllBooks()[i] << endl;
    }
    cout << "Post removal 2nd item in list (3): " << l.viewAllBooks()[1] << endl;

}