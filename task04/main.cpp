#include <iostream>
#include <iomanip>

int main() {
    double num = 123.456789;

    std::cout << "=== Floating-Point Formatting ===" << std::endl;

    // 1. Default format
    std::cout << "Default: " << num << std::endl;

    // 2. Fixed notation
    std::cout << std::fixed;
    std::cout << "Fixed:   " << num << std::endl;

    // 3. Scientific notation
    std::cout << std::scientific;
    std::cout << "Scientific: " << num << std::endl;

    // Reset to fixed for precision tests
    std::cout << std::fixed;

    // 4. Fixed with 2 digits
    std::cout << "Fixed (2 digits): " << std::setprecision(2) << num << std::endl;

    // 5. Fixed with 5 digits
    std::cout << "Fixed (5 digits): " << std::setprecision(5) << num << std::endl;

    return 0;
}