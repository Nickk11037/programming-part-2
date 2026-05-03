#include "Compressible.h"
#include <iostream>

Compressible::Compressible(const std::string& name, size_t size, double ratio)
    : File(name, size), compressionRatio(ratio) {}

void Compressible::compress() const {
    std::cout << "Compressed with ratio: " << compressionRatio << std::endl;
}