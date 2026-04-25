#pragma once
#include <string>
#include "Chapter.h"
#include "Cover.h"
#include "Index.h"

class Book {
private:
    std::string title;
    Chapter* chapters;
    int size;
    int capacity;

    Cover cover;
    Index index;

    void resize();

public:
    Book(const std::string& title, const Cover& cover, const Index& index);
    ~Book();

    void addChapter(const Chapter& chapter);
    std::string getTitle() const;
    void print() const;
};