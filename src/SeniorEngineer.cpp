#include "SeniorEngineer.h"
#include <iostream>

SeniorEngineer::SeniorEngineer(const std::string& name, int id, double salary,
                               const std::string& specialization, int experience,
                               int projectsLed, double bonus)
    : Engineer(name, id, salary, specialization, experience),
      projectsLed(projectsLed),
      bonus(bonus) {}

void SeniorEngineer::printInfo() const {
    Engineer::printInfo();
    std::cout << "Projects Led: " << projectsLed
              << ", Bonus: " << bonus << std::endl;
}