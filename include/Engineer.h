#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"

class Engineer : public Employee {
protected:
    int projects;

public:
    Engineer(const std::string& name, double salary, int projects);

    void work() const override;
    double calculateSalary() const override;
};

#endif