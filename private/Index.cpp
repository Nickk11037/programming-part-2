#include "Index.h"

Index::Index() : size(0), capacity(2) {
    entries = new std::string[capacity];
}

Index::~Index() {
    delete[] entries;
}

void Index::resize() {
    capacity *= 2;
    std::string* newArr = new std::string[capacity];

    for (int i = 0; i < size; i++)
        newArr[i] = entries[i];

    delete[] entries;
    entries = newArr;
}

void Index::addEntry(const std::string& entry) {
    if (size >= capacity)
        resize();

    entries[size++] = entry;
}

int Index::getSize() const {
    return size;
}