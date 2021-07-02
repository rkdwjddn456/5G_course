#include <cassert>
#include "safearray.h"

Safearray:: Safearray(int size)
: Array(size)
{
}

Safearray:: Safearray(const int *parr, int size)
: Array(parr,size)
{
}

Safearray:: Safearray(const Safearray& rhs)
: Array( (Array)rhs) //slicing
{
}

Safearray:: ~Safearray()
{
}

Safearray& Safearray:: operator=(const Safearray& rhs)
{
    return (Safearray& )this->Array::operator =( (Array)rhs);
}

bool Safearray:: operator==(const Safearray& rhs) const
{
    return this->Array:: operator ==( (Array)rhs);
}

int& Safearray:: operator[](int index)
{
    //+alpha : boundary check!
    //assert(index == 0 && index < this->Array::size());
    assert(index >=0 && index <this->Array::size_);
    return this->Array::operator[](index);
}

const int& Safearray:: operator[] (int index) const
{
    //assert(index == 0 && index < this->Array::size());
    assert(index >=0 && index <this->Array::size_);
    return this->Array::operator[](index);
}
