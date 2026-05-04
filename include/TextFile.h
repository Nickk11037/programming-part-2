#ifndef TEXTFILE_H
#define TEXTFILE_H

#include "File.h"

class TextFile : virtual public File {
protected:
    std::string content;

public:
    TextFile(const std::string& name, size_t size, const std::string& content);

    void printText() const;
};

#endif