#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    static const int STACKSIZE;
    
    int *parr_;
    int size_;
    int tos_;
    
    Stack(const Stack& rhs);
    Stack operator=(const Stack& rhs);

public:
    //Stack(); //not generated
    explicit Stack(int size = STACKSIZE);
    ~Stack();
    
    void push(int data);
    int pop(); 
    
    bool isfull() const;
    bool isempty() const;       
};

#endif
