#include "ReportBuilder.h"
#include <iomanip>

std::string buildReport(
    const TransactionRecord validRecords[],
    int validCount,
    const InvalidLine invalidLines[],
    int invalidCount
) {
    std::ostringstream report;

    double successSum = 0;
    int failedCount = 0;

    for (int i = 0; i < validCount; i++) {
        if (validRecords[i].status == "ok") {
            successSum += validRecords[i].amount;
        } else {
            failedCount++;
        }
    }

    report << "BANK TRANSACTION REPORT

";

    report << "Successful operations sum: "
           << std::fixed
           << std::setprecision(2)
           << successSum
           << "
";

    report << "Failed operations: "
           << failedCount
           << "
";

    report << "Largest transaction: "
           << getLargestTransaction(validRecords, validCount)
           << "

";

    report << "VALID RECORDS
";

    for (int i = 0; i < validCount; i++) {
        report << "ID: " << validRecords[i].id
               << ", Type: " << validRecords[i].type
               << ", Amount: " << validRecords[i].amount
               << ", Status: " << validRecords[i].status
               << "
";
    }

    report << "
INVALID LINES
";

    for (int i = 0; i < invalidCount; i++) {
        report << "Line " << invalidLines[i].lineNumber
               << ": " << invalidLines[i].text
               << " -> " << invalidLines[i].error
               << "
";
    }

    return report.str();
}