#include "Manager.h"
#include <iostream>

Manager::Manager(const std::string& name, double salary, int teamSize)
    : Employee(name, salary), teamSize(teamSize) {}

void Manager::work() const {
    std::cout << name << " is managing a team.\n";
}

double Manager::calculateSalary() const {
    return baseSalary + teamSize * 150;
}