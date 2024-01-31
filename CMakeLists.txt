cmake_minimum_required(VERSION 3.0.0)

project(library-management-system)

set(headers     
    "./include/Book.h"
    "./include/User.h"
    "./tests/catch.hpp"
)
set(sources 
    "./src/main.cpp" 
    "./src/Book.cpp"
)

set(tests
    "./tests/BookTest.cpp"
    "./tests/UserTest.cpp"
    "./src/User.cpp"
    "./src/Book.cpp"
)

add_executable(lrsTest ${tests}) 
add_executable(LRS ${headers} ${sources})








