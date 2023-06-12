#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
#include <map>
#include "print.h"

int main(){


    // Example usage print()

    std::vector<std::vector<int>> vec = {{1,2}, {3, 4}};
    tools::print(vec);
    std::pair<int,int> p = std::make_pair(1,2);
    tools::print(p);

    std::map<int, std::string> testData;

    testData.insert(std::make_pair(1, "John"));
    testData.insert(std::make_pair(2, "Alice"));
    testData.insert(std::make_pair(3, "Bob"));
    testData.insert(std::make_pair(4, "Sarah"));

    std::map<int, double> floatData;

    floatData.insert(std::make_pair(1, 3.14));
    floatData.insert(std::make_pair(2, 2.718));
    floatData.insert(std::make_pair(3, 1.618));
    floatData.insert(std::make_pair(4, 0.577));

    std::map<int, std::vector<int>> vectorData;

    vectorData.insert(std::make_pair(1, std::vector<int>{1, 2, 3}));
    vectorData.insert(std::make_pair(2, std::vector<int>{4, 5}));
    vectorData.insert(std::make_pair(3, std::vector<int>{6}));
    vectorData.insert(std::make_pair(4, std::vector<int>{7, 8, 9, 10}));

    tools::print(testData);
    tools::print(floatData);
    tools::print(vectorData);
    return 0;
}