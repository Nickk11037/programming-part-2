#include "Encryptable.h"
#include <iostream>

Encryptable::Encryptable(const std::string& name, size_t size, int key)
    : File(name, size), key(key) {}

void Encryptable::encrypt() const {
    std::cout << "Encrypted with key: " << key << std::endl;
}