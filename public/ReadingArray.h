#pragma once

#include "DomainTypes.h"

class ReadingArray {
private:
    Sensor* data;
    int size;

public:
    ReadingArray();
    ReadingArray(int n);

    ~ReadingArray();

    ReadingArray(const ReadingArray& other);
    ReadingArray& operator=(const ReadingArray& other);

    ReadingArray(ReadingArray&& other) noexcept;
    ReadingArray& operator=(ReadingArray&& other) noexcept;

    Sensor& operator[](int index);

    int getSize() const;
};