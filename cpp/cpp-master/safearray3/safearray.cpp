#include <cassert>
#include "safearray.h"
#include "invalidindex.h"

Safearray:: Safearray(int size)
: Array(size)
{
}

Safearray:: Safearray(const int *parr, int size)
: Array(parr,size)
{
}

Safearray:: Safearray(const Safearray& rhs)
: Array(static_cast<Array>(rhs)) //slicing
{
}

Safearray:: ~Safearray()
{
}

Safearray& Safearray:: operator=(const Safearray& rhs)
{
    return static_cast<Safearray&>(this->Array::operator =(static_cast<Array>(rhs)));
}

bool Safearray:: operator==(const Safearray& rhs) const
{
    return this->Array:: operator ==(static_cast<Array>(rhs));
}

int& Safearray:: operator[](int index)
{
    
    //assert(index >=0 && index <this->Array::size_);
    if(index <0 || index >= this->Array::size_)
        throw Invalidindex(index);
    
    return this->Array::operator[](index);
}

const int& Safearray:: operator[] (int index) const
{    
    //assert(index >=0 && index <this->Array::size_);
    if(index <0 || index >= this->Array::size_)
        throw Invalidindex(index);
    return this->Array::operator[](index);
}
