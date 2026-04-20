#pragma once
#include <string>

class Page {
private:
    int number;
    std::string content;

public:
    Page(int number = 0, const std::string& content = "");

    int getNumber() const;
    std::string getContent() const;
};