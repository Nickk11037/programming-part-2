#include "Doctor.h"

Doctor::Doctor(const std::string& name, const std::string& specialization)
    : name(name), specialization(specialization) {}

std::string Doctor::getName() const {
    return name;
}