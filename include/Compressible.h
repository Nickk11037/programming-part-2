#ifndef COMPRESSIBLE_H
#define COMPRESSIBLE_H

#include "File.h"

class Compressible : virtual public File {
protected:
    double compressionRatio;

public:
    Compressible(const std::string& name, size_t size, double ratio);

    void compress() const;
};

#endif