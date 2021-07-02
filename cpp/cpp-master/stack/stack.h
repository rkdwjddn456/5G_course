#ifndef STACK_H
#define STACK_H

class Stack
{
    
private:
    int *parr;
    int size;
    int tos;
    
public:    
    void push(int data);
    int pop();
    
    Stack(int size);
    ~Stack();
    
};


#endif
