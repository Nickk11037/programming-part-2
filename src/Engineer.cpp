#include "Engineer.h"
#include <iostream>

Engineer::Engineer(const std::string& name, int id, double salary,
                   const std::string& specialization, int experience)
    : Employee(name, id, salary),
      specialization(specialization),
      experience(experience) {}

void Engineer::printInfo() const {
    Employee::printInfo();
    std::cout << "Specialization: " << specialization
              << ", Experience: " << experience << " years" << std::endl;
}