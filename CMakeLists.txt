cmake_minimum_required(VERSION 3.0.0)

project(library-registration-system)
set(my_includes "./include/Book.h")
set(my_cpps "./src/main.cpp" "./src/Book.cpp")

add_executable(lrs ${my_includes} ${my_cpps})

include_directories("./include")




