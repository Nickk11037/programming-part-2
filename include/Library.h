#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>


/**
 * @brief Library management class.
 */
class Library {

private:

    std::vector<Book> books;


public:

    void addBook(const Book& book);


    int countAvailableBooks() const;


    std::vector<Book> searchByYear(int year) const;


    Book getOldestBook() const;


    int size() const;
};


#endif