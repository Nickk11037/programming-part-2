#include <iostream>

int main() {
    bool a = true;
    bool b = false;

    std::cout << "Default format:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    std::cout << std::endl;

    std::cout << "With std::boolalpha:" << std::endl;
    std::cout << std::boolalpha;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}