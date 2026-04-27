#pragma once
#include "Engineer.h"

class SeniorEngineer final : public Engineer {
private:
    int projectsLed;
    double bonus;

public:
    SeniorEngineer(const std::string& name, int id, double salary,
                   const std::string& specialization, int experience,
                   int projectsLed, double bonus);

    void printInfo() const override;
};