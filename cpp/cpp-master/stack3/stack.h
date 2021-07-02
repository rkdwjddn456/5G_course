#ifndef STACK_H
#define STACK_H
#include "array.h"

class Stack
{
private:
    static const int STACKSIZE;
    
    //int *parr_;
    //int size_;
    Array arr_;
    int tos_;
    
    Stack(const Stack& rhs);
    Stack& operator=(const Stack& rhs);

public:
    //Stack(); //not generated
    explicit Stack(int size = STACKSIZE);
   // ~Stack(); // is generated
    
    void push(int data);
    int pop(); 
    
    bool isfull() const;
    bool isempty() const;       
};

#endif
