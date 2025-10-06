// main.cpp
#include <vector>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main() {
    std::cout << "\n=== Testing std::vector ===" << std::endl;

    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    try {
        std::vector<int>::iterator it = easyfind(v, 2);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception& ) {
        std::cout << "EXCEPTION: Not found" << std::endl;
    }
    
    std::cout << "\n=== Testing std::list ===" << std::endl;
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    
    try {
        easyfind(lst, 99);
    } catch (std::exception& ) {
        std::cout << "EXCEPTION: Not found" << std::endl;
    }
    
    return 0;
}
