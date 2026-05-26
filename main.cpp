#include <fstream>
#include "Record.h"
#include "ReportBuilder.h"

int main() {
    std::ifstream input("data/input.txt");

    if (!input.is_open()) {
        std::cout << "Failed to open file
";
        return 1;
    }

    TransactionRecord validRecords[100];
    InvalidLine invalidLines[100];

    int validCount = 0;
    int invalidCount = 0;

    std::string line;
    int lineNumber = 1;

    while (std::getline(input, line)) {
        TransactionRecord record;
        std::string error;

        if (parseRecord(line, record, error)) {
            validRecords[validCount++] = record;
        } else {
            invalidLines[invalidCount++] = {lineNumber, line, error};
        }

        lineNumber++;
    }

    std::string report = buildReport(
        validRecords,
        validCount,
        invalidLines,
        invalidCount
    );

    std::ofstream output("data/generated_report.txt");
    output << report;

    std::cout << report;

    std::string ascii = "Bank";
    std::string utf8 = "Банк";

    std::cout << "
ASCII bytes: " << ascii.size() << "
";
    std::cout << "UTF-8 bytes: " << utf8.size() << "
";

    char buffer[100];

    std::snprintf(
        buffer,
        sizeof(buffer),
        "Largest transaction: %.2f",
        getLargestTransaction(validRecords, validCount)
    );

    std::cout << buffer << "
";

    return 0;
}