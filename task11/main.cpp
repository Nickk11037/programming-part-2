#include <iostream>
#include <iomanip>
#include <format>
#include <print>

int main() {
    std::string name = "Alice";
    int score = 95;
    double average = 88.756;

    // ===== 1. std::cout =====
    std::cout << "=== std::cout version ===\n";
    std::cout << std::left << std::setw(15) << "Name:" << name << "\n";
    std::cout << std::setw(15) << "Score:" << score << "\n";
    std::cout << std::setw(15) << "Average:" 
              << std::fixed << std::setprecision(2) << average << "\n\n";

    // ===== 2. std::format =====
    std::cout << "=== std::format version ===\n";
    std::cout << std::format("{:<15}{}\n", "Name:", name);
    std::cout << std::format("{:<15}{}\n", "Score:", score);
    std::cout << std::format("{:<15}{:.2f}\n\n", "Average:", average);

    // ===== 3. std::println =====
    std::println("=== std::println version ===");
    std::println("{:<15}{}", "Name:", name);
    std::println("{:<15}{}", "Score:", score);
    std::println("{:<15}{:.2f}", "Average:", average);

    return 0;
}