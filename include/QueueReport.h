#ifndef QUEUEREPORT_H
#define QUEUEREPORT_H

template<typename T>
class QueueReport {
private:
    T firstTicket;
    int currentSize;

public:
    QueueReport(T ticket, int size) {
        firstTicket = ticket;
        currentSize = size;
    }

    T getFirstTicket() const {
        return firstTicket;
    }

    int getCurrentSize() const {
        return currentSize;
    }
};

#endif