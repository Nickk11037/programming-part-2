#ifndef TICKETVALIDATOR_H
#define TICKETVALIDATOR_H

template<typename T>
class TicketValidator {
public:
    static bool isValid(const T&) {
        return true;
    }
};

template<>
class TicketValidator<int> {
public:
    static bool isValid(const int& value) {
        return value >= 1 && value <= 9999;
    }
};

#endif