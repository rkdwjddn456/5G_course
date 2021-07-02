#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    static const int QUEUESIZE;
    int *parr_;
    int size_;
    int front_;
    int rear_;
    
    Queue(const Queue& rhs);
    Queue operator=(const Queue& rhs);
    
public:
    explicit Queue(int size =QUEUESIZE);
    ~Queue();
    
    void push(int data);
    int pop();
    
    bool isempty() const;
    bool isfull() const;
};

#endif
