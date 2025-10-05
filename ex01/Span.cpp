#include "Span.hpp"

Span::Span():N(0){}
Span::Span(unsigned int n):N(n){}
Span::Span(const Span& other){  *this = other;  }
Span& Span::operator=(const Span& other){

    if (this != &other){
        this->N = other.N;
        this->_Numbers = other._Numbers;
    }
    return *this;
}
Span::~Span(){}

void    Span::addNumber(int number){
    if (_Numbers.size() + 1 > N)
        throw std::exception();
    this->_Numbers.push_back(number);
}

int Span::longestSpan(){
    if (_Numbers.size() < 2)
        throw std::exception();
    return (*(std::max_element(_Numbers.begin(), _Numbers.end())) \
        - *(std::min_element(_Numbers.begin(), _Numbers.end())));
}

int Span::shortestSpan(){
    if (_Numbers.size() < 2)
        throw std::exception();
    
    std::vector<int > _Numbers_temp = _Numbers;
    std::sort(_Numbers_temp.begin(), _Numbers_temp.end());
    int Shortest_Span = _Numbers_temp[1] - _Numbers_temp[0];
    size_t len = _Numbers_temp.size()-1;
    for (size_t i(1); i < len ;i++){
        int temp = _Numbers_temp[i+1] - _Numbers_temp[i];
        if (temp < Shortest_Span)
            Shortest_Span = temp;
    }
    return Shortest_Span;
}