#ifndef NURSE_H
#define NURSE_H

#include <string>

class Nurse {
private:
    std::string name;

public:
    Nurse(const std::string& name);
    std::string getName() const;
};

#endif