#include "Ward.h"

Ward::Ward(int number) : number(number), patientCount(0) {}

void Ward::addPatient(Patient* patient) {
    patients[patientCount++] = patient;
}

int Ward::getNumber() const {
    return number;
}

int Ward::getPatientCount() const {
    return patientCount;
}