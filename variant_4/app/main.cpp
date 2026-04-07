#include <iostream>
#include "grades.h"

int main() {
    int grades[] = {85, 90, 78, 92, 88};
    int size = 5;

    std::cout << "Average: " << calculateAverage(grades, size) << std::endl;
    std::cout << "Min: " << findMin(grades, size) << std::endl;
    std::cout << "Max: " << findMax(grades, size) << std::endl;

    return 0;
}