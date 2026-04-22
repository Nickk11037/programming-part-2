#include "Chapter.h"

Chapter::Chapter()
    : title(""), size(0), capacity(2) {
    pages = new Page[capacity];
}

Chapter::Chapter(const std::string& title)
    : title(title), size(0), capacity(2) {
    pages = new Page[capacity];
}

Chapter::Chapter(const Chapter& other)
    : title(other.title), size(other.size), capacity(other.capacity) {
    pages = new Page[capacity];
    for (int i = 0; i < size; i++)
        pages[i] = other.pages[i];
}

Chapter::~Chapter() {
    delete[] pages;
}

Chapter& Chapter::operator=(const Chapter& other) {
    if (this != &other) {
        delete[] pages;
        title = other.title;
        size = other.size;
        capacity = other.capacity;
        pages = new Page[capacity];
        for (int i = 0; i < size; i++)
            pages[i] = other.pages[i];
    }
    return *this;
}

void Chapter::resize() {
    capacity *= 2;
    Page* newArr = new Page[capacity];

    for (int i = 0; i < size; i++)
        newArr[i] = pages[i];

    delete[] pages;
    pages = newArr;
}

void Chapter::addPage(const Page& page) {
    if (size >= capacity)
        resize();

    pages[size++] = page;
}

std::string Chapter::getTitle() const {
    return title;
}

int Chapter::getPageCount() const {
    return size;
}