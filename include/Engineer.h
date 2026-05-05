#pragma once
#include "Employee.h"

class Engineer : public Employee {
protected:
    std::string specialization;
    int experience;

public:
    Engineer(const std::string& name, int id, double salary,
             const std::string& specialization, int experience);

    void printInfo() const override;
};