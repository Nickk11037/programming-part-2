#include "Patient.h"

Patient::Patient(const std::string& name) : name(name) {}

std::string Patient::getName() const {
    return name;
}