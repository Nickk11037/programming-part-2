#ifndef ENCRYPTABLE_H
#define ENCRYPTABLE_H

#include "File.h"

class Encryptable : virtual public File {
protected:
    int key;

public:
    Encryptable(const std::string& name, size_t size, int key);

    void encrypt() const;
};

#endif