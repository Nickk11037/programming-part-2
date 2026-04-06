#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main() {
    std::ofstream outfile("report.txt");

    if (!outfile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Column Headers
    outfile << std::left 
              << std::setw(5) << "Rank" 
              << std::setw(15) << "Driver" 
              << std::setw(10) << "Points" 
              << std::right << std::setw(12) << "Gap" << std::endl;
    outfile << std::string(42, '-') << std::endl;

    // Row Data
    outfile << std::left 
              << std::setw(5) << 1 
              << std::setw(15) << "Verstappen" 
              << std::setw(10) << 454 
              << std::right << std::fixed << std::setprecision(1) << std::setw(12) << 0.0 << std::endl;

    outfile << std::left 
              << std::setw(5) << 2 
              << std::setw(15) << "Perez" 
              << std::setw(10) << 285 
              << std::right << std::setw(12) << 169.0 << std::endl;

    outfile << std::left 
              << std::setw(5) << 3 
              << std::setw(15) << "Hamilton" 
              << std::setw(10) << 234 
              << std::right << std::setw(12) << 220.0 << std::endl;

    outfile << std::left 
              << std::setw(5) << 4 
              << std::setw(15) << "Alonso" 
              << std::setw(10) << 206 
              << std::right << std::setw(12) << 248.0 << std::endl;

    outfile << std::left 
              << std::setw(5) << 5 
              << std::setw(15) << "Leclerc" 
              << std::setw(10) << 206 
              << std::right << std::setw(12) << 248.0 << std::endl;

    outfile.close();
    std::cout << "Report written to report.txt successfully." << std::endl;

    return 0;
}