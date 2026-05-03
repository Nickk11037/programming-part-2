#include "Employee.h"

Employee::Employee(const std::string& name, double salary)
    : name(name), baseSalary(salary) {}

Employee::~Employee() {}