#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
#include <map>
#include "print.h"
template <typename Container>
void displayElements(const Container& container)
{
    // Check if the container is empty
    if (container.empty())
    {
        std::cout << "Container is empty." << std::endl;
        return;
    }

    // Use iterator to access and display elements
    std::cout << "Container elements: ";
    std::copy(container.begin(), container.end(), std::ostream_iterator<typename Container::value_type>(std::cout, " "));
    std::cout << std::endl;
}

template <typename T>
void printVector(const std::vector<T>& vec)
{
    std::cout << "Vector: ";
    for (const auto& element : vec)
    {
        std::cout << element <<  " ";
    }
    std::cout << std::endl;
}

int main()
{

    // Example usage
    std::vector<std::vector<int>> vec = {{1,2}, {3, 4}};
    //tools::displayContainer(vec);
    tools::print(vec);
//    std::list<std::string> lst = {"Hello", "World"};
//    displayElements(lst);
//
//    std::set<double> st = {1.2, 3.4, 5.6};
//    displayElements(st);



    return 0;
}