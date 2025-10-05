#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
 

class Span{
        unsigned int N;
        std::vector <int> _Numbers;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
        
        void    addNumber(int number);
        int     shortestSpan();
        int     longestSpan();
        template<typename Iterator>
        void addRange(Iterator begin, Iterator end){
            if (_Numbers.size() + std::distance(begin, end) > N)
            _Numbers.insert(_Numbers.end() ,begin,end);
        }
};

#endif