#include <iostream>
#include <iomanip>

int main() {
    int num = 42;

    std::cout << "=== Integer Formatting ===" << std::endl;

    std::cout << "Decimal:     " << std::dec << num << std::endl;

    std::cout << "Hexadecimal: " << std::hex << std::showbase << num << std::endl;

    std::cout << "Octal:       " << std::oct << num << std::endl;

    return 0;
}