#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <exception>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int toFind){
    (void) toFind;
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);
    if (it == container.end())
        throw std::exception();
    return it;
}


#endif