#ifndef FIXEDQUEUE_H
#include <stdexcept>

template<typename T, int N>
class FixedQueue {
private:
    T data[N];
    int frontIndex;
    int rearIndex;
    int count;

public:
    FixedQueue() {
        frontIndex = 0;
        rearIndex = 0;
        count = 0;
    }

    bool enqueue(const T& value) {
        if (isFull()) {
            return false;
        }

        data[rearIndex] = value;
        rearIndex = (rearIndex + 1) % N;
        count++;

        return true;
    }

    bool dequeue() {
        if (isEmpty()) {
            return false;
        }

        frontIndex = (frontIndex + 1) % N;
        count--;

        return true;
    }

    T front() const {
        if (isEmpty()) {
            throw std::out_of_range("Queue is empty");
        }

        return data[frontIndex];
    }

    bool isEmpty() const {
        return count == 0;
    }

    bool isFull() const {
        return count == N;
    }

    int size() const {
        return count;
    }
};

#endif