# Laboratory Work 13

## Topic
Text parsing, validation, and report generation in C++.

---

## Objective
Create a C++ program for processing bank transaction records stored in a text file.

Transaction format:

id=501; type=deposit; amount=250.00; status=ok

The program must:
- read transaction lines from a file;
- parse key=value fields;
- validate records;
- calculate the sum of successful operations;
- count failed operations;
- find the largest transaction;
- generate a text report.

Validation requirements:
- type must be deposit, withdrawal, or transfer;
- amount must be a positive number.

Long numeric identifiers must be masked.

---

## Approximate Solution

The program reads data from `input.txt` using `std::ifstream`.

Each line is processed separately:
1. the line is split into parts using `split()`;
2. spaces are removed with `trim()`;
3. fields are extracted using `parseKeyValue()`.

Transaction validation is performed with `std::regex_match()`.

The program checks:
- transaction type;
- numeric amount format;
- positive amount value.

Valid records are stored in an array of `TransactionRecord`.

Invalid lines are stored in `InvalidLine`, which contains:
- line number;
- original text;
- error description.

Long identifiers are hidden using `std::regex_replace()`.

The report is generated through `std::ostringstream` and written into a file using `std::ofstream`.

The project also demonstrates:
- UTF-8 string size difference;
- work with `std::snprintf()`;
- helper functions based on `std::string_view`.

---

## Conclusion

During the laboratory work, a program for processing bank transactions was implemented in C++.

The project demonstrated:
- text parsing;
- validation with regular expressions;
- file handling;
- report generation;
- UTF-8 string processing;
- formatted output functions.

The laboratory work improved practical skills in C++ text processing, validation, and structured program organization.