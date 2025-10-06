// main.cpp
#include "Span.hpp"
#include <iostream>
#include <list>

int main() {
    std::cout << "\n=== Base tests ===" << std::endl;

    Span sp = Span(5);
    try{
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    }
    catch(std::exception& ){
        std::cout << "EXCEPTION: Cant Add more element\n";
    }
    
    std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl; 
    std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
    
    std::cout << "\n=== After Adding 10000 element ===" << std::endl;


    Span big(10000);
    for (int i = 0; i < 10000; i++) {
        try{
            big.addNumber(i);
        }
        catch(std::exception& ){
            std::cout << "EXCEPTION: Cant Add more element\n"; 
        }
    }
    std::cout << "shortestSpan: " << big.shortestSpan() << std::endl; 
    std::cout << "longestSpan: " << big.longestSpan() << std::endl;  
    std::cout << "\n=== Testing with add Range method ===" << std::endl;

    std::list<int> lst;
    std::list<int>::iterator it = lst.begin();
    ++it;
    try{
        big.addRange(lst.begin(), lst.end());
    }
    catch(...){
        std::cout << "EXCEPTION: Container Cant Add that Range\n";
    }
    std::cout << "shortestSpan: "<< big.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << big.longestSpan() << std::endl;  
    return 0;
}