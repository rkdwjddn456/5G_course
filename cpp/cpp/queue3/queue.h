#ifndef QUEUE_H
#define QUEUE_H
#include "array.h"

class Queue
{
private:
    static const int QUEUESIZE;
    
    //int *parr_;
    //int size_;
    Array arr_;
    int front_;
    int rear_;
    
    Queue(const Queue& rhs);
    Queue operator=(const Queue& rhs);
    
public:
    explicit Queue(int size =QUEUESIZE);
    //~Queue(); //is generated
    
    void push(int data);
    int pop();
    
    bool isempty() const;
    bool isfull() const;
};

#endif
