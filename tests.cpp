```cpp id="9r4jhn"
#include <gtest/gtest.h>

#include "Product.h"
#include "SimpleForwardList.h"
#include "SimpleVector.h"

TEST(ForwardListTest, EmptyContainer)
{
    SimpleForwardList<int> list;

    EXPECT_TRUE(list.empty());
    EXPECT_EQ(list.size(), 0);
}

TEST(ForwardListTest, OneElement)
{
    SimpleForwardList<int> list;

    list.push_front(5);

    EXPECT_EQ(list.front(), 5);
}

TEST(ForwardListTest, SeveralElements)
{
    SimpleForwardList<int> list;

    list.push_front(1);
    list.push_front(2);
    list.push_front(3);

    EXPECT_EQ(list.size(), 3);
}

TEST(ForwardListTest, IteratorIncrement)
{
    SimpleForwardList<int> list;

    list.push_front(10);
    list.push_front(20);

    auto it = list.begin();

    EXPECT_EQ(*it, 20);

    ++it;

    EXPECT_EQ(*it, 10);
}

TEST(VectorTest, EmptyVector)
{
    SimpleVector<int> vec;

    EXPECT_TRUE(vec.empty());
}

TEST(VectorTest, PushBack)
{
    SimpleVector<int> vec;

    vec.push_back(10);

    EXPECT_EQ(vec[0], 10);
}

TEST(VectorTest, SeveralElements)
{
    SimpleVector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    EXPECT_EQ(vec.size(), 3);
}

TEST(VectorTest, CopyConstructor)
{
    SimpleVector<int> vec;

    vec.push_back(100);

    SimpleVector<int> copy(vec);

    EXPECT_EQ(copy[0], 100);
}

TEST(VectorTest, MoveConstructor)
{
    SimpleVector<int> vec;

    vec.push_back(50);

    SimpleVector<int> moved(std::move(vec));

    EXPECT_EQ(moved[0], 50);
}

TEST(VectorTest, OutOfRange)
{
    SimpleVector<int> vec;

    EXPECT_THROW(vec.at(0), std::out_of_range);
}
