#include "Book.h"


Book::Book(int id,
           const std::string& title,
           const std::string& author,
           int year,
           bool available)
    :
    id(id),
    title(title),
    author(author),
    year(year),
    available(available)
{}



int Book::getId() const
{
    return id;
}


std::string Book::getTitle() const
{
    return title;
}


std::string Book::getAuthor() const
{
    return author;
}


int Book::getYear() const
{
    return year;
}


bool Book::isAvailable() const
{
    return available;
}