#ifndef SENIORENGINEER_H
#define SENIORENGINEER_H

#include "Engineer.h"

class SeniorEngineer : public Engineer {
private:
    double bonus;

public:
    SeniorEngineer(const std::string& name, double salary, int projects, double bonus);

    void work() const override;
    double calculateSalary() const override;
};

#endif