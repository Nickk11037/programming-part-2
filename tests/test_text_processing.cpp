#include <cassert>
#include <iostream>
#include "StringUtils.h"
#include "Record.h"

int main() {
    assert(trim("  hello  ") == "hello");

    std::string result[10];
    int count = split("a,b,c", ',', result, 10);

    assert(count == 3);

    std::string key;
    std::string value;

    assert(parseKeyValue("id=500", key, value));
    assert(key == "id");
    assert(value == "500");

    TransactionRecord record;
    std::string error;

    bool valid = parseRecord(
        "id=501; type=deposit; amount=250.00; status=ok",
        record,
        error
    );

    assert(valid);

    bool invalid = parseRecord(
        "id=700; type=payment; amount=50; status=ok",
        record,
        error
    );

    assert(!invalid);

    assert(maskIdentifier("123456") == "****");

    std::cout << "Tests passed
";

    return 0;
}