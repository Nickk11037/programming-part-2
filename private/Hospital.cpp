#include "Hospital.h"

Hospital::Hospital(const std::string& name)
    : name(name), doctorCount(0), nurseCount(0), wardCount(0) {}

void Hospital::addDoctor(Doctor* doctor) {
    doctors[doctorCount++] = doctor;
}

void Hospital::addNurse(Nurse* nurse) {
    nurses[nurseCount++] = nurse;
}

void Hospital::addWard(Ward* ward) {
    wards[wardCount++] = ward;
}

std::string Hospital::getName() const {
    return name;
}

int Hospital::getDoctorCount() const {
    return doctorCount;
}