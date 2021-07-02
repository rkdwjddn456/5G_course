#include <cassert>
#include "queue.h"

const int Queue:: QUEUESIZE = 100;

Queue:: Queue(int size)
:parr_(new int[size]), size_(size) , front_(0) , rear_(0)
{
    assert(parr_);
}

Queue:: ~Queue()
{
    delete [] parr_;
}

void Queue:: push(int data)
{
    assert(!isfull());
    parr_[rear_] = data;
    ++rear_;
}

int Queue:: pop()
{
    assert( !isempty());
    int tmp = front_;
    ++front_;
    return parr_[tmp];
    
}

bool Queue::isempty() const
{
    return front_ == rear_;
}

bool Queue::isfull() const
{
    return (rear_== size_);
}
