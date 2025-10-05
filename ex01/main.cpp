// main.cpp
#include "Span.hpp"
#include <iostream>
#include <list>

int main() {
    // Basic test
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;  // 2
    std::cout << sp.longestSpan() << std::endl;   // 14
    
    // Test with 10,000 numbers
    Span big(10000);
    for (int i = 0; i < 10000; i++) {
        big.addNumber(i);
    }
    std::cout << big.shortestSpan() << std::endl;  // 1
    std::cout << big.longestSpan() << std::endl;   // 9999
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(3);

    std::list<int>::iterator it = lst.begin();
    ++it;

    lst.insert(it, 2);  // lst is now {1, 2, 3}
    big.addRange(lst.begin(), lst.end());
    std::cout << big.shortestSpan() << std::endl;  // 1
    std::cout << big.longestSpan() << std::endl;   // 9999
    return 0;
}