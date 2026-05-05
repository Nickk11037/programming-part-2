#pragma once
#include "Employee.h"

class Manager : public Employee {
private:
    int teamSize;
    std::string department;

public:
    Manager(const std::string& name, int id, double salary,
            int teamSize, const std::string& department);

    void printInfo() const override;
};