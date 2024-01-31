# Personal Project

## Library Management System

**Description**:
- The application will act as a library's system which can keep track of books from a 
    Book class (containing the name, genre, and ID)
    and lend them out for a set amount of time before the book is due to return. The app will also
    ask for a rating once a book is returned and store that in the Book then re-add the book into the Library.
    The library will also separate the books by genre allowing duplicate books with different ID. 
    *The application will not connect to a library or any website and books will manually have to be added 
    or generated using the Book class*.
  - There will be an account and registration system locally stored with persistence so the user is able to keep their data and state of the application.
  - Admin accounts will have capabilities to revoke books and delete users as needed
    


- The application is meant for anyone who enjoys reading or wants to access a library with books to borrow or return. 
Whether it is a student, worker, or any reader, a library app is useful for everyone to easily manage 
and navigate to books to borrow.

### User Stories
- As a user I want to be able to "donate" (add) books to the library and make them available to borrow.
- As a user I want to be ablet to register and have an account to hold my borrowed books and be able to access them.
- As a user I want to be able to list all the books in the library and an option to display only available books 
(not including already borrowed books).
- As a user I want to be able to select a book from the library, check its status, and borrow it if it is available.
- As a user I want to be able to return a book and give it a rating that will be stored.

- As a user I want to have the option save the state of my account and the books currently on it, and the library's state
- As a user I want to have the option to load my account and the library's state, and
add to it and return books as needed.
