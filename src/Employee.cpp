#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string& name, int id, double salary)
    : name(name), id(id), salary(salary) {}

void Employee::printInfo() const {
    std::cout << "Employee: " << name
              << ", ID: " << id
              << ", Salary: " << salary << std::endl;
}