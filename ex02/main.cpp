#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
    std::cout << "=== Testing MutantStack ===" << std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << "element in the back: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "size after pop(): "<< mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    
    std::cout << "\n=== Testing std::list ===" << std::endl;
    {
        std::list<int> mstack;
        mstack.push_back(5); 
        mstack.push_back(17);
        std::cout << "element in the back: " << mstack.back() << std::endl;
        mstack.pop_back();   
        std::cout << "size after pop_back(): "<< mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);
        
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(mstack);
    }
    std::cout << "\n=== Testing std::vector ===" << std::endl;
    {
        std::vector<int> mstack;  
        mstack.push_back(5);   
        mstack.push_back(17);
        std::cout << "element in the back: " << mstack.back() << std::endl; 
        mstack.pop_back();  
        std::cout << "size after pop_back(): " << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);
        
        std::vector<int>::iterator it = mstack.begin();
        std::vector<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::vector<int> s(mstack);
    }
    return 0;
}