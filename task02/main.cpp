#include <iostream>
#include <string>
#include <limits>

int main() {
    int int_val;
    double float_val;
    std::string word;
    std::string line;

    std::cout << "Enter an integer: ";
    std::cin >> int_val;

    std::cout << "Enter a floating-point value: ";
    std::cin >> float_val;

    std::cout << "Enter a word: ";
    std::cin >> word;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter a full line of text: ";
    std::getline(std::cin, line);

    std::cout << "\n=== Entered Values ===" << std::endl;
    std::cout << "Integer: " << int_val << std::endl;
    std::cout << "Float: " << float_val << std::endl;
    std::cout << "Word: " << word << std::endl;
    std::cout << "Line: " << line << std::endl;

    return 0;
}