#ifndef VARIANT_UTILS_H
#define VARIANT_UTILS_H

#include <stdexcept>

template <typename T>
T& nthElement(T* arr, int n, int index) {
    if (index < 0 || index >= n) {
        throw std::out_of_range("Index out of bounds");
    }
    return arr[index];
}

template <typename T>
void rotateThree(T& a, T& b, T& c) {
    T temp = a;
    a = b;
    b = c;
    c = temp;
}

template <typename T>
T windowMax(const T* arr, int offset, int count) {
    if (count <= 0) {
        throw std::invalid_argument("Invalid count");
    }

    T maxVal = arr[offset];

    for (int i = offset + 1; i < offset + count; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

#endif