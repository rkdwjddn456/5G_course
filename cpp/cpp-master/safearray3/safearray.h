#ifndef SAFEARRAY_H
#define SAFEARRAY_H

#include "array.h"

class Safearray : public Array
{
private:

public:    
    //Safearray* operator&();
    //const Safearray* operator&() const;
    
    //Safearray();  // is not generated
    //explicit Safearray(int size = Safearray:: Array::getarraysize());
    explicit Safearray(int size = Safearray::Array::ARRAYSIZE);
    Safearray(const int *parr , int size);
    Safearray(const Safearray& rhs);
    virtual ~Safearray();
    Safearray& operator=(const Safearray& rhs);
           
    bool operator==(const Safearray& rhs) const;
    
    virtual int& operator[] (int index);   //overriding (name , returntype, param) is same !
    virtual const int& operator[] (int index) const;    
};

#endif
