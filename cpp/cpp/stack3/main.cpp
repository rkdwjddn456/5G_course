#include <iostream>
#include "stack.h"

int main()
{
    Stack s1;
    Stack s2(10);
    
    
    s1.push(100);
    s1.push(200);
    s1.push(300);
    
    while(!s1.isempty())
    {
        std::cout<<"s1 1st pop() : "<<s1.pop() << std::endl;
    }
    return 0;
}
