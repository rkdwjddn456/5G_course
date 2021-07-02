#ifndef SAFEARRAY_H
#define SAFEARRAY_H

#include "array.h"

template <typename T>
class Safearray : public Array<T>
{
private:

public:        
    explicit Safearray(int size = Safearray<T>::Array::ARRAYSIZE);
    Safearray(const T *parr , int size);
    Safearray(const Safearray<T>& rhs);
    virtual ~Safearray();
    Safearray<T>& operator=(const Safearray<T>& rhs);
           
    bool operator==(const Safearray<T>& rhs) const;
    
    virtual T& operator[] (int index);   
    virtual const T& operator[] (int index) const;    
};

#include <cassert>

template <typename T>
Safearray<T>:: Safearray(int size)
: Array<T>(size)
{
}

template <typename T>
Safearray<T>:: Safearray(const T *parr, int size)
: Array<T>(parr,size)
{
}

template <typename T>
Safearray<T>:: Safearray(const Safearray<T>& rhs)
: Array<T>( (Array<T>)rhs) //slicing
{
}

template <typename T>
Safearray<T>:: ~Safearray()
{
}

template <typename T>
Safearray<T>& Safearray<T>:: operator=(const Safearray<T>& rhs)
{
    return (Safearray<T>& )this->Array<T>::operator =( (Array<T>)rhs);
}

template <typename T>
bool Safearray<T>:: operator==(const Safearray<T>& rhs) const
{
    return this->Array<T>:: operator ==( (Array<T>)rhs);
}

template <typename T>
T& Safearray<T>:: operator[](int index)
{
    //+alpha : boundary check!
    //assert(index == 0 && index < this->Array::size());
    assert(index >=0 && index <this->Array<T>::size_);
    return this->Array<T>::operator[](index);
}

template <typename T>
const T& Safearray<T>:: operator[] (int index) const
{
    //assert(index == 0 && index < this->Array::size());
    assert(index >=0 && index <this->Array<T>::size_);
    return this->Array<T>::operator[](index);
}
#endif
