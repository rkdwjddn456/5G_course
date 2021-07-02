#ifndef ARRAY_H
#define ARRAY_H

template <typename T>

class Array
{
private:   
    
    T *parr_; 
    
protected:
    static const int ARRAYSIZE;
    int size_;
    
public:
        
    static int getarraysize();
    //Array* operator&();
    //const Array* operator &() const;

    //Array();
    explicit Array(int size = Array<T>:: ARRAYSIZE);
    Array(const T *parr, int size);
    Array(const Array<T>& rhs);
    virtual ~Array();
    
    Array<T>& operator =(const Array<T>& rhs);
    bool operator ==(const Array<T>& rhs) const;
    virtual T& operator [](int index);
    virtual const T& operator [](int index) const;
    int size() const;   
};

#include <cassert>
//#include "array.h"

template <typename T>
const int Array<T>:: ARRAYSIZE = 100;

template <typename T>
int Array<T>:: getarraysize()
{
    return Array<T>::ARRAYSIZE;
}

template <typename T>
Array<T>:: Array(int size)
: parr_(new T[size]), size_(size)
{    
    assert(parr_ );   
}

template <typename T>
Array<T>:: Array(const T *parr,int size)
: parr_(new T[size]) , size_(size)
{
    assert(parr_ );
    for(int i =0 ; i<size ; ++i)
        parr_[i] = parr[i];
}

template <typename T>
Array<T>:: Array(const Array<T>& rhs)
:parr_(new T[rhs.size_]) , size_(rhs.size_)
{
    assert(parr_ );
    for (int i =0; i<rhs.size_ ; ++i)
        parr_[i] = rhs.parr_[i];
}

template <typename T>
Array<T>::~Array()
{
    delete [] parr_;
}

template <typename T>
Array<T>& Array<T>:: operator =(const Array<T>& rhs)
{
    if(this != &rhs) // deep copy
    {
        delete [] parr_;
        parr_ = new T[rhs.size_];
        assert(parr_ );
        size_ = rhs.size_;
        
        for(int i =0; i<rhs.size_ ; ++i)
            parr_[i] = rhs.parr_[i];
    }
}

template <typename T>
bool Array<T>:: operator == (const Array<T>& rhs) const
{
    if(size_ != rhs.size_)
        return false;
    
    int i;
    for(i=0; i<rhs.size_ ; ++i)
        if(parr_[i] != rhs.parr_[i]) break;
    
    return (i == rhs.size_);
    
        
}

template <typename T>
T& Array<T>:: operator[] (int index)
{
    return parr_[index];
}

template <typename T>
const T& Array<T>:: operator [] (int index) const
{
    return parr_[index];
}

template <typename T>
int Array<T>:: size() const
{
    return size_;
}


#endif
