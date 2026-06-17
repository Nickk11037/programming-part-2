#ifndef BOOK_H
#define BOOK_H

#include <string>

/**
 * @brief Represents a book in library.
 */
class Book {
private:
    int id;
    std::string title;
    std::string author;
    int year;
    bool available;

public:

    /**
     * @brief Creates a book.
     */
    Book(int id,
         const std::string& title,
         const std::string& author,
         int year,
         bool available);


    int getId() const;

    std::string getTitle() const;

    std::string getAuthor() const;

    int getYear() const;

    bool isAvailable() const;
};

#endif