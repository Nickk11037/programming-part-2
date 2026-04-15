#include "Nurse.h"

Nurse::Nurse(const std::string& name) : name(name) {}

std::string Nurse::getName() const {
    return name;
}