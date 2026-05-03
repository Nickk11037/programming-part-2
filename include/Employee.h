#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string name;
    double baseSalary;

public:
    Employee(const std::string& name, double salary);
    virtual ~Employee();

    virtual void work() const = 0;
    virtual double calculateSalary() const = 0;
};

#endif