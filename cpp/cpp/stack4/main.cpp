#include <iostream>
#include "stack.h"

int main()
{
    Stack<int> s1;
    Stack<int> s2(10);
    
    
    s1.push(100);
    s1.push(200);
    s1.push(300);
    
    while(!s1.isempty())
    {
        std::cout<<"s1 1st pop() : "<<s1.pop() << std::endl;
    }
    return 0;
}
