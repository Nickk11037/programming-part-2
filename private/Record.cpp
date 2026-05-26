#include "Record.h"
            type = value;
        } else if (key == "amount") {
            amount = value;
        } else if (key == "status") {
            status = value;
        }
    }

    std::regex typeRegex("^(deposit|withdrawal|transfer)$");

    if (!std::regex_match(type, typeRegex)) {
        error = "Invalid type";
        return false;
    }

    std::regex amountRegex("^[0-9]+(\.[0-9]+)?$");

    if (!std::regex_match(amount, amountRegex)) {
        error = "Invalid amount";
        return false;
    }

    double value = 0;

    try {
        size_t processed;
        value = std::stod(amount, &processed);

        if (processed != amount.size() || value <= 0) {
            error = "Amount must be positive";
            return false;
        }
    } catch (...) {
        error = "Conversion failed";
        return false;
    }

    record.id = maskIdentifier(id);
    record.type = type;
    record.amount = value;
    record.status = status;

    return true;
}

std::string maskIdentifier(const std::string& id) {
    std::regex pattern("[0-9]{4,}");
    return std::regex_replace(id, pattern, "****");
}

double getLargestTransaction(const TransactionRecord records[], int count) {
    double max = 0;

    for (int i = 0; i < count; i++) {
        if (records[i].amount > max) {
            max = records[i].amount;
        }
    }

    return max;
}