#include "TextFile.h"
#include <iostream>

TextFile::TextFile(const std::string& name, size_t size, const std::string& content)
    : File(name, size), content(content) {}

void TextFile::printText() const {
    std::cout << "Content: " << content << std::endl;
}