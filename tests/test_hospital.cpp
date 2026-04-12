#include <gtest/gtest.h>
#include "../public/Hospital.h"
#include "../public/Doctor.h"

TEST(HospitalTest, AddDoctor) {
    Hospital hospital("Test");
    Doctor d("Doc", "Therapy");

    hospital.addDoctor(&d);

    EXPECT_EQ(hospital.getDoctorCount(), 1);
}