#include "Library.h"
#include <algorithm>


void Library::addBook(const Book& book)
{
    books.push_back(book);
}



int Library::countAvailableBooks() const
{
    int count = 0;

    for(const auto& book : books)
    {
        if(book.isAvailable())
            count++;
    }

    return count;
}



std::vector<Book> Library::searchByYear(int year) const
{

    std::vector<Book> result;


    for(const auto& book : books)
    {
        if(book.getYear() == year)
            result.push_back(book);
    }


    return result;
}




Book Library::getOldestBook() const
{

    return *std::min_element(
        books.begin(),
        books.end(),
        [](const Book& a,const Book& b)
        {
            return a.getYear() < b.getYear();
        }
    );

}



int Library::size() const
{
    return books.size();
}