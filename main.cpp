#include <iostream>
#include <string>
#include "variant_utils.h"

int main() {
    int arr[] = {1, 5, 3, 9, 2};

    std::cout << "nthElement: " << nthElement(arr, 5, 2) << std::endl;

    int a = 1, b = 2, c = 3;
    rotateThree(a, b, c);
    std::cout << "rotateThree: " << a << " " << b << " " << c << std::endl;

    std::cout << "windowMax: " << windowMax(arr, 1, 3) << std::endl;

    return 0;
}