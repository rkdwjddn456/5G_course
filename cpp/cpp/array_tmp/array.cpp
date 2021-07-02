#include <cassert>
#include "array.h"

const int Array:: ARRAYSIZE = 100;
/*
Array:: Array()
{
    this->parr = new int[100];
    assert(this->parr );
    this->size = 100;
}*/

Array:: Array(int size)
: parr(new int[size]) , size_(size)
{
    //this->parr = new int(size);
    assert(this->parr );
    //this->size_ = size_;
}

Array:: Array(const int *parr , int size)
:parr(new int[size]) , size_(size)
{
    //this -> parr = new int[size];
    assert(this->parr );
    for(int i=0 ; i<size ; ++i)
        this->parr[i] = parr[i];
    //this->size_ = size;    
}

Array:: Array(const Array& rhs)
:parr(new int [rhs.size_]) , size_(rhs.size_)
{
    //this->parr = new int[rhs.size_];
    assert(this->parr );
    for(int i =0 ; i<rhs.size_; ++i)
        this->parr[i] = rhs.parr[i];
        
    //this->size_ = rhs.size_;
}

Array::~Array()
{
    delete [] this->parr;
}

Array& Array::operator=(const Array& rhs)
{
    if(this != &rhs)
    {
        delete [] this->parr;
        this->parr = new int[rhs.size_];
        assert(this->parr );
        for(int i =0 ; i<size_; ++i)
            this->parr[i] = rhs.parr[i];
        this->size_ =rhs.size_;    
    }
    
    return *this;
}

bool Array::operator==(const Array& rhs) const
{
    if(this->size_ != rhs.size_)
        return false;
    int i=0;
    for(i =0 ; i<this->size_ ; ++i)
        if(this->parr[i] != rhs.parr[i])
            break;
    return (i == this->size_);
}

int Array::size() const
{
    return this->size_;
}

int& Array::operator[] (int index)
{
    return this->parr[index];
}

const int& Array:: operator[](int index) const
{
    return this->parr[index];
}
