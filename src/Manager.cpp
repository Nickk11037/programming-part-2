#include "Manager.h"
#include <iostream>

Manager::Manager(const std::string& name, int id, double salary,
                 int teamSize, const std::string& department)
    : Employee(name, id, salary),
      teamSize(teamSize),
      department(department) {}

void Manager::printInfo() const {
    Employee::printInfo();
    std::cout << "Department: " << department
              << ", Team Size: " << teamSize << std::endl;
}