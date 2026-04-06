#include <vector>
#include <fmt/core.h>
#include "grades.h"

int main() {
    std::vector<int> grades = {24, 22, 88, 100, 67};

    fmt::print("Average: {}\n", getAverage(grades));
    fmt::print("Min: {}\n", getMin(grades));
    fmt::print("Max: {}\n", getMax(grades));

    return 0;
}