#include "../public/ReadingArray.h"

ReadingArray::ReadingArray()
    : data(nullptr), size(0) {}

ReadingArray::ReadingArray(int n)
    : size(n)
{
    data = new Sensor[size];
}

ReadingArray::~ReadingArray() {
    delete[] data;
}

ReadingArray::ReadingArray(const ReadingArray& other)
    : size(other.size)
{
    data = new Sensor[size];

    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

ReadingArray& ReadingArray::operator=(const ReadingArray& other) {

    if (this == &other) {
        return *this;
    }

    delete[] data;

    size = other.size;
    data = new Sensor[size];

    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }

    return *this;
}

ReadingArray::ReadingArray(ReadingArray&& other) noexcept
    : data(other.data),
      size(other.size)
{
    other.data = nullptr;
    other.size = 0;
}

ReadingArray& ReadingArray::operator=(ReadingArray&& other) noexcept {

    if (this == &other) {
        return *this;
    }

    delete[] data;

    data = other.data;
    size = other.size;

    other.data = nullptr;
    other.size = 0;

    return *this;
}

Sensor& ReadingArray::operator[](int index) {
    return data[index];
}

int ReadingArray::getSize() const {
    return size;
}