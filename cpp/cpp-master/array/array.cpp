#include <cassert>
#include "array.h"

const int Array:: ARRAYSIZE = 100;

int Array:: getarraysize()
{
    return Array::ARRAYSIZE;
}

Array:: Array(int size)
: parr_(new int[size]), size_(size)
{    
    assert(parr_ );   
}

Array:: Array(const int *parr,int size)
: parr_(new int[size]) , size_(size)
{
    assert(parr_ );
    for(int i =0 ; i<size ; ++i)
        parr_[i] = parr[i];
}

Array:: Array(const Array& rhs)
:parr_(new int[rhs.size_]) , size_(rhs.size_)
{
    assert(parr_ );
    for (int i =0; i<rhs.size_ ; ++i)
        parr_[i] = rhs.parr_[i];
}

Array::~Array()
{
    delete [] parr_;
}

Array& Array:: operator =(const Array& rhs)
{
    if(this != &rhs) // deep copy
    {
        delete [] parr_;
        parr_ = new int[rhs.size_];
        assert(parr_ );
        size_ = rhs.size_;
        
        for(int i =0; i<rhs.size_ ; ++i)
            parr_[i] = rhs.parr_[i];
    }
}

bool Array:: operator == (const Array& rhs) const
{
    if(size_ != rhs.size_)
        return false;
    
    int i;
    for(i=0; i<rhs.size_ ; ++i)
        if(parr_[i] != rhs.parr_[i]) break;
    
    return (i == rhs.size_);
    
        
}

int& Array:: operator[] (int index)
{
    return parr_[index];
}

const int& Array:: operator [] (int index) const
{
    return parr_[index];
}

int Array:: size() const
{
    return size_;
}


