#include "SeniorEngineer.h"
#include <iostream>

SeniorEngineer::SeniorEngineer(const std::string& name, double salary, int projects, double bonus)
    : Engineer(name, salary, projects), bonus(bonus) {}

void SeniorEngineer::work() const {
    std::cout << name << " is leading development.\n";
}

double SeniorEngineer::calculateSalary() const {
    return Engineer::calculateSalary() + bonus;
}