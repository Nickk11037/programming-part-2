#pragma once
#include <string>
#include "Page.h"

class Chapter {
private:
    std::string title;
    Page* pages;
    int size;
    int capacity;

    void resize();

public:
    Chapter();
    Chapter(const std::string& title);
    Chapter(const Chapter& other);
    ~Chapter();

    Chapter& operator=(const Chapter& other);

    void addPage(const Page& page);
    std::string getTitle() const;
    int getPageCount() const;
};