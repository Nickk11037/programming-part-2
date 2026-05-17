#include <iostream>
#include <string>

#include "include/FixedQueue.h"
#include "include/TicketValidator.h"
#include "include/DemoHelpers.h"

int main() {
    runIntegerQueueDemo();

    runStringQueueDemo();

    std::cout << "\nCompiler investigation\n";

    std::cout
            << "Size of FixedQueue<int, 5>: "
            << sizeof(FixedQueue<int, 5>)
            << '\n';

    std::cout
            << "Size of FixedQueue<std::string, 5>: "
            << sizeof(FixedQueue<std::string, 5>)
            << '\n';

    return 0;
}