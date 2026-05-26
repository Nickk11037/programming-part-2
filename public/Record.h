#ifndef RECORD_H
#define RECORD_H

#include <string>

struct TransactionRecord {
    std::string id;
    std::string type;
    double amount;
    std::string status;
};

struct InvalidLine {
    int lineNumber;
    std::string text;
    std::string error;
};

bool parseRecord(const std::string& line, TransactionRecord& record, std::string& error);
std::string maskIdentifier(const std::string& id);
double getLargestTransaction(const TransactionRecord records[], int count);

#endif