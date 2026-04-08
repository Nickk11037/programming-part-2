#include <gtest/gtest.h>
#include "grades.h"

TEST(GradesTest, Average) {
    int arr[] = {80, 90, 100};
    EXPECT_DOUBLE_EQ(calculateAverage(arr, 3), 90);
}

TEST(GradesTest, Min) {
    int arr[] = {80, 60, 100};
    EXPECT_EQ(findMin(arr, 3), 60);
}

TEST(GradesTest, Max) {
    int arr[] = {80, 60, 100};
    EXPECT_EQ(findMax(arr, 3), 100);
}