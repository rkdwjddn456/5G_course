
#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int *parr;
    int queue[10];
    int front;
    int rear;
    int size;
    
public:
    
    void push(int data);
    int pop();
    Queue(int size);
    ~Queue();
};


#endif
