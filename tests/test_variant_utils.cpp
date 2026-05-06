#include <gtest/gtest.h>
#include <string>
#include "variant_utils.h"

TEST(NthElementTest, IntArray) {
    int arr[] = {1,2,3,4,5};

    EXPECT_EQ(nthElement(arr,5,0), 1);
    EXPECT_EQ(nthElement(arr,5,4), 5);
    EXPECT_EQ(nthElement(arr,5,2), 3);
}

TEST(NthElementTest, StringArray) {
    std::string arr[] = {"a","b","c"};

    EXPECT_EQ(nthElement(arr,3,1), "b");
}

TEST(RotateThreeTest, Int) {
    int a=1,b=2,c=3;

    rotateThree(a,b,c);

    EXPECT_EQ(a,2);
    EXPECT_EQ(b,3);
    EXPECT_EQ(c,1);
}

TEST(RotateThreeTest, String) {
    std::string a="A",b="B",c="C";

    rotateThree(a,b,c);

    EXPECT_EQ(a,"B");
    EXPECT_EQ(b,"C");
    EXPECT_EQ(c,"A");
}

TEST(WindowMaxTest, IntArray) {
    int arr[] = {1,5,3,9,2};

    EXPECT_EQ(windowMax(arr,0,5), 9);
    EXPECT_EQ(windowMax(arr,2,1), 3);
    EXPECT_EQ(windowMax(arr,1,3), 9);
}