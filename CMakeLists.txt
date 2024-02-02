cmake_minimum_required(VERSION 3.0.0)

project(library-management-system)

set(headers     
    "./include/Library.h"
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
)

set(booktests
    "./tests/BookTest.cpp"
    "./src/Book.cpp"
)   

set(usertests
    "./src/Book.cpp"
    "./tests/UserTest.cpp"
    "./src/User.cpp"
)

set(librarytests
    "./src/Library.cpp"
    "./src/Book.cpp"
    "./tests/LibraryTest.cpp"
    "./src/User.cpp"

)

# add_executable(bookTest ${booktests}) 
# add_executable(userTest ${usertests}) 
add_executable(libTest ${librarytests}) 
add_executable(LRS ${headers} ${sources})








