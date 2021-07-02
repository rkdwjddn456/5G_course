#include <cassert>
#include "stack.h"

const int Stack:: STACKSIZE = 100;

Stack::Stack(int size)
:parr_(new int[size]), size_(size) ,tos_(0)
{
    assert(parr_ );  
}

Stack:: ~Stack()
{
    delete [] parr_;
}

void Stack::push(int data)
{
    assert(!isfull());
    
    parr_[tos_] = data;
    ++tos_;
}

int Stack:: pop()
{
    assert(!isempty());
    --tos_;
    return parr_[tos_];    
}


bool Stack::isfull() const
{
    return (tos_ == size_);
}

bool Stack::isempty() const
{
    return (tos_ == 0);
}
