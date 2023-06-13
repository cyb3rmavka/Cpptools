#ifndef CPPTOOLS_STRING_TOOLS_H
#define CPPTOOLS_STRING_TOOLS_H

#include <vector>
#include <string>
#include <sstream>
#include <unordered_set>

namespace tools {
    namespace string {
        std::vector<std::string> splitString(const std::string &input, char delimiter) {
            std::vector<std::string> substrings;
            std::stringstream ss(input);
            std::string substring;

            while (std::getline(ss, substring, delimiter)) {
                substrings.emplace_back(std::move(substring));
            }

            return substrings;
        }

        std::string combineStrings(const std::vector<std::string> &strings) {
            std::string combinedString;
            combinedString.reserve(256);

            for (const auto &str: strings) {
                combinedString += str;
            }

            return combinedString;
        }

        std::string cutWords(const std::string &input, const std::unordered_set<std::string> &wordsToCut) {
            std::stringstream ss(input);
            std::string word;
            std::string result;

            while (ss >> word) {
                if (wordsToCut.find(word) == wordsToCut.end()) {
                    result += std::move(word) + " ";
                }
            }

            if (!result.empty()) {
                result.pop_back();  // Remove the trailing space
            }

            return result;
        }
    }

}

#endif
