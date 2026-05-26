#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <string>
#include <string_view>

std::string trim(const std::string& str);
int split(const std::string& str, char delimiter, std::string result[], int maxParts);
bool parseKeyValue(const std::string& text, std::string& key, std::string& value);

std::string_view trim_view(std::string_view str);
int split_view(std::string_view str, char delimiter, std::string_view result[], int maxParts);
bool parseKeyValueView(std::string_view text, std::string_view& key, std::string_view& value);

#endif