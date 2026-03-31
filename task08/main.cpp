#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    std::ofstream file("report.txt");

    if (!file) {
        std::cout << "Error: cannot open file!" << std::endl;
        return 1;
    }

    std::string title = "STUDENT REPORT";
    int tasksCompleted = 5;
    double averageScore = 87.45;
    bool passed = true;

    file << std::setw(30) << std::right << title << std::endl;

    file << std::setfill('-') << std::setw(40) << "-" << std::setfill(' ') << std::endl;

    file << std::left << std::setw(25) << "Tasks completed:" << tasksCompleted << std::endl;
    file << std::setw(25) << "Average score:" << std::fixed << std::setprecision(2) << averageScore << std::endl;

    file << std::boolalpha;
    file << std::setw(25) << "Passed:" << passed << std::endl;

    file << std::setfill('-') << std::setw(40) << "-" << std::setfill(' ') << std::endl;

    file << "Summary: Student successfully completed the course." << std::endl;

    file.close();

    std::cout << "Report created: report.txt" << std::endl;

    return 0;
}