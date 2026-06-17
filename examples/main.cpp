#include <iostream>

#include "Library.h"


int main()
{

    Library library;


    library.addBook(
        Book(1,"C++","Bjarne",2013,true)
    );


    library.addBook(
        Book(2,"Algorithms","Knuth",1997,false)
    );



    std::cout 
        << "Available books: "
        << library.countAvailableBooks()
        << std::endl;



    Book oldest = library.getOldestBook();


    std::cout 
        << "Oldest book: "
        << oldest.getTitle()
        << std::endl;


    return 0;
}