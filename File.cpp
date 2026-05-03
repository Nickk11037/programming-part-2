#include "File.h"

File::File(const std::string& name, size_t size)
    : name(name), size(size) {}

File::~File() {}