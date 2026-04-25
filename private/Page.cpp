#include "Page.h"

Page::Page(int number, const std::string& content)
    : number(number), content(content) {}

int Page::getNumber() const {
    return number;
}

std::string Page::getContent() const {
    return content;
}