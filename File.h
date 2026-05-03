#ifndef FILE_H
#define FILE_H

#include <string>

class File {
protected:
    std::string name;
    size_t size;

public:
    File(const std::string& name, size_t size);
    virtual ~File();

    virtual void process() const = 0;
};

#endif