#include <iostream>
#include "public/Hospital.h"
#include "public/Doctor.h"
#include "public/Nurse.h"
#include "public/Ward.h"
#include "public/Patient.h"

int main() {
    Hospital hospital("City Hospital");

    Doctor d1("Smith", "Cardiology");
    Nurse n1("Anna");
    Ward w1(101);
    Patient p1("John");

    hospital.addDoctor(&d1);
    hospital.addNurse(&n1);
    hospital.addWard(&w1);

    w1.addPatient(&p1);

    std::cout << "Hospital: " << hospital.getName() << std::endl;
    std::cout << "Doctors: " << hospital.getDoctorCount() << std::endl;
    std::cout << "Patients in ward: " << w1.getPatientCount() << std::endl;

    return 0;
}