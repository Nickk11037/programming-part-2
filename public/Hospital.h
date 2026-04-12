#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <string>
#include "Doctor.h"
#include "Nurse.h"
#include "Ward.h"

class Hospital {
private:
    std::string name;

    Doctor* doctors[100];
    Nurse* nurses[100];
    Ward* wards[100];

    int doctorCount;
    int nurseCount;
    int wardCount;

public:
    Hospital(const std::string& name);

    void addDoctor(Doctor* doctor);
    void addNurse(Nurse* nurse);
    void addWard(Ward* ward);

    std::string getName() const;
    int getDoctorCount() const;
};

#endif