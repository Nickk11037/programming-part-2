#include <gtest/gtest.h>
#include <string>

#include "../include/FixedQueue.h"
#include "../include/TicketValidator.h"

TEST(FixedQueueTest, EnqueueWorks) {
    FixedQueue<int, 3> queue;

    EXPECT_TRUE(queue.enqueue(10));
    EXPECT_TRUE(queue.enqueue(20));

    EXPECT_EQ(queue.front(), 10);
}

TEST(FixedQueueTest, DequeueWorks) {
    FixedQueue<int, 3> queue;

    queue.enqueue(10);
    queue.enqueue(20);

    queue.dequeue();

    EXPECT_EQ(queue.front(), 20);
}

TEST(FixedQueueTest, FullQueueCheck) {
    FixedQueue<int, 2> queue;

    queue.enqueue(1);
    queue.enqueue(2);

    EXPECT_TRUE(queue.isFull());
}

TEST(FixedQueueTest, EmptyQueueCheck) {
    FixedQueue<int, 2> queue;

    EXPECT_TRUE(queue.isEmpty());
}

TEST(TicketValidatorTest, IntValidationWorks) {
    EXPECT_TRUE(TicketValidator<int>::isValid(100));
    EXPECT_FALSE(TicketValidator<int>::isValid(15000));
}

TEST(TicketValidatorTest, GenericValidationWorks) {
    EXPECT_TRUE(
            TicketValidator<std::string>::isValid("ABC")
    );
}