#include <iostream>
#include <fstream>
#include <format>

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

    file << std::format("{:>30}\n", title);

    file << std::format("{:-<40}\n", "");

    file << std::format("{:<25}{}\n", "Tasks completed:", tasksCompleted);
    file << std::format("{:<25}{:.2f}\n", "Average score:", averageScore);
    file << std::format("{:<25}{}\n", "Passed:", passed);

    file << std::format("{:-<40}\n", "");


    file << std::format("Summary: {}\n", "Student successfully completed the course.");

    file.close();

    std::cout << "Report created: report.txt" << std::endl;

    return 0;
}