#ifndef SECURECOMPRESSEDFILE_H
#define SECURECOMPRESSEDFILE_H

#include "TextFile.h"
#include "Compressible.h"
#include "Encryptable.h"

class SecureCompressedFile : public TextFile, public Compressible, public Encryptable {
public:
    SecureCompressedFile(const std::string& name,
                         size_t size,
                         const std::string& content,
                         double ratio,
                         int key);

    void process() const override;
};

#endif