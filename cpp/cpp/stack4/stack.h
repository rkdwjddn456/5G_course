#ifndef STACK_H
#define STACK_H
#include "array.h"

template<typename T>
class Stack 
{
private:
    static const int STACKSIZE;
    
    
    Array<T> arr_;
    int tos_;
    
    Stack(const Stack<T>& rhs);
    Stack<T>& operator=(const Stack<T>& rhs);

public:
    
    explicit Stack(int size = STACKSIZE);
    
    //void push(T data);  
    void push(const T& data);
    const T pop(); 
    
    bool isfull() const;
    bool isempty() const;       
};

#include <cassert>

template<typename T>
const int Stack<T>:: STACKSIZE = 100;

template<typename T>
Stack<T>::Stack(int size)
:arr_(size),tos_(0)
{
     
}

template<typename T>
void Stack<T>::push(const T& data)
{
    assert(!isfull());
    
    arr_[tos_] = data;
    ++tos_;
}

template<typename T>
const T Stack<T>:: pop()
{
    assert(!isempty());
    --tos_;
    return arr_[tos_];    
}

template<typename T>
bool Stack<T>::isfull() const
{
    return (tos_ == arr_.size());
}

template<typename T>
bool Stack<T>::isempty() const
{
    return (tos_ == 0);
}
#endif
