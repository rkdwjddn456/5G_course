#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void push(Stack *ps,const void* pdata)
{
    
    assert(ps->tos != ps->size);
    
    //ps->parr[ps->tos] = data;
    //memcpy(&ps->parr[ps->tos], pdata ,ps->elesize);    :X
    memcpy((unsigned char *)ps->parr + ps->elesize * ps->tos, pdata , ps->elesize);
    ++ps->tos;
}

/*int pop(Stack *ps)
{
    
    assert(ps->tos != 0);
    
    --ps->tos;
    return ps->parr[ps->tos];
}*/

void pop(Stack* ps, void *pdata)
{
    assert(ps->tos !=0);
    --ps->tos;
    //*pdata = ps->parr[ps->tos];
    //memcpy(pdata, &ps->parr[ps->tos], ps->elesize);     :X
    memcpy(pdata,(unsigned char*)ps->parr + ps->elesize* ps->tos , ps->elesize);
    
}

void initStack(Stack *ps,int size,int elesize)
{
    //ps->parr = malloc(sizeof(int)* size);
    ps->parr = malloc(elesize * size);
    assert(ps->parr /*!= NULL*/);
    
    ps->elesize =elesize;
    ps->size = size;
    ps->tos =0;
}

void cleanupstack(Stack *ps)
{
    free(ps->parr);
}
