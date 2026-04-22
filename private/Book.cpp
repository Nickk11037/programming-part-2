#include "Book.h"
#include "Chapter.h"
#include <iostream>

Book::Book(const std::string& title, const Cover& cover, const Index& index)
    : title(title), cover(cover), index(index), size(0), capacity(2) {
    chapters = new Chapter[capacity];
}

Book::~Book() {
    delete[] chapters;
}

void Book::resize() {
    capacity *= 2;
    Chapter* newArr = new Chapter[capacity];

    for (int i = 0; i < size; i++)
        newArr[i] = chapters[i];

    delete[] chapters;
    chapters = newArr;
}

void Book::addChapter(const Chapter& chapter) {
    if (size >= capacity)
        resize();

    chapters[size++] = chapter;
}

std::string Book::getTitle() const {
    return title;
}

void Book::print() const {
    std::cout << "Book: " << title << "\nChapters: " << size << std::endl;
}