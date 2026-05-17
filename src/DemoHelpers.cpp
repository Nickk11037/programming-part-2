#include <iostream>
#include <string>

#include "../include/FixedQueue.h"
#include "../include/TicketValidator.h"
#include "../include/QueueReport.h"
#include "../include/DemoHelpers.h"

void runIntegerQueueDemo() {
    FixedQueue<int, 5> queue;

    int tickets[] = {100, 250, 5000, 15000};

    for (int i = 0; i < 4; i++) {
        if (TicketValidator<int>::isValid(tickets[i])) {
            queue.enqueue(tickets[i]);
            std::cout << "Added: " << tickets[i] << '
';
        } else {
            std::cout << "Invalid ticket: " << tickets[i] << '
';
        }
    }

    QueueReport<int> report(queue.front(), queue.size());

    std::cout << "
First ticket: "
              << report.getFirstTicket()
              << '
';

    std::cout << "Queue size: "
              << report.getCurrentSize()
              << '
';
}

void runStringQueueDemo() {
    FixedQueue<std::string, 3> queue;

    queue.enqueue("A101");
    queue.enqueue("B202");

    std::cout << "
Front string ticket: "
              << queue.front()
              << '
';
}