#include <cassert>
#include "queue.h"

const int Queue:: QUEUESIZE = 100;

Queue:: Queue(int size)
:arr_(size), front_(0) , rear_(0)
{
    
}

void Queue:: push(int data)
{
    assert(!isfull());
    
    arr_[rear_] = data;
    ++rear_;
}

int Queue:: pop()
{
    assert( !isempty());
    
    int tmp = front_;
    ++front_;
    return arr_[tmp];
    
}

bool Queue::isempty() const
{
    return front_ == rear_;
}

bool Queue::isfull() const
{
    return (rear_== arr_.size());
}
