#ifndef REPORTBUILDER_H
#define REPORTBUILDER_H

#include "Record.h"
#include <string>

std::string buildReport(
    const TransactionRecord validRecords[],
    int validCount,
    const InvalidLine invalidLines[],
    int invalidCount
);

#endif