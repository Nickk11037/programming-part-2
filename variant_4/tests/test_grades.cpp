#include <gtest/gtest.h>
#include "grades.h"
#include <vector>

TEST(GradesTest, Average) {
    std::vector<int> grades = {80, 90, 100};
    EXPECT_EQ(getAverage(grades), 90);
}

TEST(GradesTest, Min) {
    std::vector<int> grades = {80, 90, 100};
    EXPECT_EQ(getMin(grades), 80);
}

TEST(GradesTest, Max) {
    std::vector<int> grades = {80, 90, 100};
    EXPECT_EQ(getMax(grades), 100);
}