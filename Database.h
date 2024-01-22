/*
File: Database.h
Author: Youssef Kahil
*/

#include <string>
#include "User.h"

using namespace std;

class Database {
    public:
    // Constructs a Database of users with their information.
    Database();

    private:
    list<User> users;
    list<string> storage;

};