#include <cassert>

#include "Library.h"


void testAddBook()
{

    Library lib;

    lib.addBook(
        Book(1,"Book","Author",2000,true)
    );


    assert(lib.size()==1);

}



void testAvailableCount()
{

    Library lib;


    lib.addBook(
        Book(1,"A","A",2000,true)
    );


    lib.addBook(
        Book(2,"B","B",2001,false)
    );


    assert(lib.countAvailableBooks()==1);

}



void testSearchYear()
{

    Library lib;


    lib.addBook(
        Book(1,"A","A",1999,true)
    );


    auto result = lib.searchByYear(1999);


    assert(result.size()==1);

}



void testSearchEmptyYear()
{

    Library lib;


    auto result = lib.searchByYear(2025);


    assert(result.empty());

}




void testOldestBook()
{

    Library lib;


    lib.addBook(
        Book(1,"New","A",2020,true)
    );


    lib.addBook(
        Book(2,"Old","B",1990,true)
    );


    assert(
        lib.getOldestBook().getTitle()
        ==
        "Old"
    );

}




void testMultipleBooks()
{

    Library lib;


    lib.addBook(
        Book(1,"A","A",2000,true)
    );


    lib.addBook(
        Book(2,"B","B",2005,true)
    );


    assert(lib.size()==2);

}




int main()
{

    testAddBook();

    testAvailableCount();

    testSearchYear();

    testSearchEmptyYear();

    testOldestBook();

    testMultipleBooks();


    return 0;
}