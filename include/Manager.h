#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(const std::string& name, double salary, int teamSize);

    void work() const override;
    double calculateSalary() const override;
};

#endif