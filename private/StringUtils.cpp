#include "StringUtils.h"
            current.clear();
        } else {
            current += c;
        }
    }

    if (count < maxParts) {
        result[count++] = current;
    }

    return count;
}

bool parseKeyValue(const std::string& text, std::string& key, std::string& value) {
    size_t pos = text.find('=');

    if (pos == std::string::npos) {
        return false;
    }

    key = trim(text.substr(0, pos));
    value = trim(text.substr(pos + 1));

    return !key.empty() && !value.empty();
}

std::string_view trim_view(std::string_view str) {
    size_t start = str.find_first_not_of(" 	

");
    size_t end = str.find_last_not_of(" 	

");

    if (start == std::string_view::npos) {
        return {};
    }

    return str.substr(start, end - start + 1);
}

int split_view(std::string_view str, char delimiter, std::string_view result[], int maxParts) {
    int count = 0;
    size_t start = 0;

    while (true) {
        size_t pos = str.find(delimiter, start);

        if (pos == std::string_view::npos) {
            if (count < maxParts) {
                result[count++] = str.substr(start);
            }
            break;
        }

        if (count < maxParts) {
            result[count++] = str.substr(start, pos - start);
        }

        start = pos + 1;
    }

    return count;
}

bool parseKeyValueView(std::string_view text, std::string_view& key, std::string_view& value) {
    size_t pos = text.find('=');

    if (pos == std::string_view::npos) {
        return false;
    }

    key = trim_view(text.substr(0, pos));
    value = trim_view(text.substr(pos + 1));

    return !key.empty() && !value.empty();
}