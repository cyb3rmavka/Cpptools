#ifndef CPPTOOLS_PRINT_H
#define CPPTOOLS_PRINT_H

#include <vector>
#include <iostream>
#include <unordered_map>

namespace tools {
    namespace {
        template<typename T>
        void print(T el) {
            std::cout << el << " ";
        }

        template<typename T>
        void print(const std::vector<T> &vec) {
            for (const auto &element: vec) {
                print(element);
            }
            std::cout << std::endl;
        }

        template<typename T>
        void print(const std::list<T> &l) {
            for (const auto &element: l) {
                print(element);
            }
            std::cout << std::endl;
        }

        template<typename T>
        void print(const std::set<T> &s) {
            for (const auto &element: s) {
                print(element);
            }
            std::cout << std::endl;
        }

        template<typename T1, typename T2>
        void print(const std::pair<T1, T2> &p) {
            print(p.first);
            print(p.second);
            std::cout << std::endl;
        }

        template<typename T1, typename T2>
        void print(const std::map<T1, T2> &m) {
            for (const auto &element: m) {
                print(element.first);
                print(element.second);
            }
            std::cout << std::endl;
        }

        template<typename T1, typename T2>
        void print(const std::unordered_map<T1, T2> &m) {
            for (const auto &element: m) {
                print(element.first);
                print(element.second);
            }
            std::cout << std::endl;
        }
    }
}
#endif
