#pragma once
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double salary;

public:
    Employee(const std::string& name, int id, double salary);

    virtual void printInfo() const;

    virtual ~Employee() = default;
};