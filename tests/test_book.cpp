#include <gtest/gtest.h>
#include "Chapter.h"

TEST(ChapterTest, AddPages) {
    Chapter ch("Test");

    ch.addPage(Page(1, "A"));
    ch.addPage(Page(2, "B"));

    EXPECT_EQ(ch.getPageCount(), 2);
}