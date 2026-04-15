#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

class Doctor {
private:
    std::string name;
    std::string specialization;

public:
    Doctor(const std::string& name, const std::string& specialization);

    std::string getName() const;
};

#endif