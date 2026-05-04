#include "SecureCompressedFile.h"
#include <iostream>

SecureCompressedFile::SecureCompressedFile(const std::string& name,
                                           size_t size,
                                           const std::string& content,
                                           double ratio,
                                           int key)
    : File(name, size),
      TextFile(name, size, content),
      Compressible(name, size, ratio),
      Encryptable(name, size, key) {}

void SecureCompressedFile::process() const {
    std::cout << "Processing file: " << name << std::endl;
    printText();
    compress();
    encrypt();
}