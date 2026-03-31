#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::cout << std::left 
              << std::setw(5) << "ID" 
              << std::setw(15) << "Item Name" 
              << std::setw(10) << "Quantity" 
              << std::right << std::setw(12) << "Price" << std::endl;
    std::cout << std::string(42, '-') << std::endl;

    std::cout << std::left 
              << std::setw(5) << 1 
              << std::setw(15) << "Apple" 
              << std::setw(10) << 50 
              << std::right << std::fixed << std::setprecision(2) << std::setw(12) << 2.99 << std::endl;

    std::cout << std::left 
              << std::setw(5) << 2 
              << std::setw(15) << "Banana" 
              << std::setw(10) << 30 
              << std::right << std::setw(12) << 1.49 << std::endl;

    std::cout << std::left 
              << std::setw(5) << 3 
              << std::setw(15) << "Cherry_Box" 
              << std::setw(10) << 15 
              << std::right << std::setw(12) << 12.50 << std::endl;

    std::cout << std::left 
              << std::setw(5) << 4 
              << std::setw(15) << "Dates_Bag" 
              << std::setw(10) << 8 
              << std::right << std::setw(12) << 8.75 << std::endl;

    std::cout << std::left 
              << std::setw(5) << 5 
              << std::setw(15) << "Elderberry" 
              << std::setw(10) << 4 
              << std::right << std::setw(12) << 25.00 << std::endl;

    return 0;
}