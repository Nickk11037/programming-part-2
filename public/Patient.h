#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
private:
    std::string name;

public:
    Patient(const std::string& name);
    std::string getName() const;
};

#endif