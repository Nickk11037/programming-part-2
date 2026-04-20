#pragma once
#include <string>

class Index {
private:
    std::string* entries;
    int size;
    int capacity;

    void resize();

public:
    Index();
    ~Index();

    void addEntry(const std::string& entry);
    int getSize() const;
};