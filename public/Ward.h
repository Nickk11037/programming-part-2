#ifndef WARD_H
#define WARD_H

#include "Patient.h"

class Ward {
private:
    int number;

    Patient* patients[100];
    int patientCount;

public:
    Ward(int number);

    void addPatient(Patient* patient);
    int getNumber() const;
    int getPatientCount() const;
};

#endif