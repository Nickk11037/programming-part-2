#include "Book.h"

int main() {
    Cover cover("Hard", "Black");
    Index index;
    index.addEntry("Intro");

    Book book("OOP Book", cover, index);

    Chapter ch("Chapter 1");
    ch.addPage(Page(1, "Moon"));
    ch.addPage(Page(2, "Star"));

    book.addChapter(ch);

    book.print();

    return 0;
}