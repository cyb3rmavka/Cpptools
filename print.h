
#ifndef CPPTOOLS_PRINT_H
#define CPPTOOLS_PRINT_H

#include <vector>
#include <iostream>

namespace tools {

    template<typename T>
    void print(T el){
        std::cout << el << " ";
    }

    template <typename T>
    void print(const std::vector<T>& vec){
        for (const auto& element : vec){
            print(element);
        }
        std::cout << std::endl;
    }

    template <typename T>
    void print(const std::list<T>& vec){
        for (const auto& element : vec){
            print(element);
        }
        std::cout << std::endl;
    }

    template <typename T>
    void print(const std::set<T>& vec){
        for (const auto& element : vec){
            print(element);
        }
        std::cout << std::endl;
    }
}
#endif
