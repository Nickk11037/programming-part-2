#include <vector>
#include <fmt/core.h>
#include "grades.h"

int main() {
    std::vector<int> grades = {90, 75, 88, 100, 67};

    fmt::print("Average: {}\n", getAverage(grades));
    fmt::print("Min: {}\n", getMin(grades));
    fmt::print("Max: {}\n", getMax(grades));

    return 0;
}