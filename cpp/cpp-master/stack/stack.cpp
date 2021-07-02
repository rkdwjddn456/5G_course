#include "stack.h"
//#include <cstdlib>
#include <cassert>

void Stack:: push(int data)
{    
    assert(this->tos != this->size);
    
    this->parr[this->tos] = data;
    ++this->tos;
}

int Stack:: pop()
{   
    assert(this->tos != 0);
    
    --this->tos;
    return this->parr[this->tos];
}

Stack::Stack(int size)
{
    //this->parr = (int *)malloc(sizeof(int)* size);
    this->parr = new int[size];
    assert(this->parr /*!= NULL*/);
    this->size = size;
    this->tos =0;
}

Stack::~Stack()
{
    //free(this->parr);
    delete [] this->parr;
}
