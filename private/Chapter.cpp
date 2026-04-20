#include "Chapter.h"

Chapter::Chapter(const std::string& title)
    : title(title), size(0), capacity(2) {
    pages = new Page[capacity];
}

Chapter::~Chapter() {
    delete[] pages;
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