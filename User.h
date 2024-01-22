/*
File: User.h
Author: Youssef Kahil
*/
#include <string>
#include <list>
using namespace std;

class User {

    public:
    // Constructs a user given next id 
    // needing a name, password, and empty datablock
    User(string name, string password);

    // getters
    int getID();
    string getName();
    string getPassword();
    list<Book> getBooks();

    private:
    int userID = 0;
    string username;
    string password;
    list<Book> books;


};