//#include <cstdio> // namespace header
#include <iostream>
#include "stack.h"

int main()
{
    Stack s1(10), s2(100);
         
    //s1.initStack(10);
    //s2.initStack(100);
        
    s1.push(100);
    s1.push(200);
    s1.push(300);
    
    s2.push(900);
    s2.push(800);
    s2.push(700);
    
    //printf("s1 1st pop() : %d\n",s1.pop());
    /*std::cout<<"s1 1st pop() : ";
    std:: cout<<s1.pop();
    std::cout << std::endl;*/
    
    std::cout<< "s1 1st pop() : " <<s1.pop() << std::endl;
    std::cout<< "s1 2st pop() : " <<s1.pop() << std::endl;
    std::cout<< "s1 3st pop() : " <<s1.pop() << std::endl;
    
    std::cout<< "s2 1st pop() : " <<s2.pop() << std::endl;
    std::cout<< "s2 2st pop() : " <<s2.pop() << std::endl;
    std::cout<< "s2 3st pop() : " <<s2.pop() << std::endl;
    
    
    //s1.cleanupstack();
    //s2.cleanupstack();   
    
    return 0;
}
