#include "Engineer.h"
#include <iostream>

Engineer::Engineer(const std::string& name, double salary, int projects)
    : Employee(name, salary), projects(projects) {}

void Engineer::work() const {
    std::cout << name << " is developing software.\n";
}

double Engineer::calculateSalary() const {
    return baseSalary + projects * 100;
}