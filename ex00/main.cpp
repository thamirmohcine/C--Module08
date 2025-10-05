// main.cpp
#include <vector>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main() {
    // Test with vector
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    try {
        std::vector<int>::iterator it = easyfind(v, 2);
        std::cout << "Found: " << *it << std::endl;
    } catch (std::exception& e) {
        std::cout << "Not found" << std::endl;
    }
    
    // Test with list
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    
    try {
        easyfind(lst, 99);  // Will throw
    } catch (std::exception& e) {
        std::cout << "Not found" << std::endl;
    }
    
    return 0;
}
