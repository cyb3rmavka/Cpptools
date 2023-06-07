#ifndef CPPTOOLS_STRING_TOOLS_H
#define CPPTOOLS_STRING_TOOLS_H

#include <vector>
#include <string>
#include <sstream>

namespace tools {

    std::vector<std::string> splitString(const std::string& input, char delimiter) {
        std::vector<std::string> substrings;
        std::stringstream ss(input);
        std::string substring;

        while (std::getline(ss, substring, delimiter)) {
            substrings.emplace_back(std::move(substring));
        }

        return substrings;
    }

}

#endif
