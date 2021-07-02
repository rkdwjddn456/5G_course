#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void push(Stack *ps,int data)
{
    /*if(ps->tos == ps->size) //full
    {
        fprintf(stderr,"stack is full\n");
        exit(1);
    }*/

    assert(ps->tos != ps->size);
    
    ps->parr[ps->tos] = data;
    ++ps->tos;
}

int pop(Stack *ps)
{
    /*if(ps->tos == 0)
    {
        fprintf(stderr,"stack is empty\n");
        exit(2);
    }*/
    assert(ps->tos != 0);
    
    --ps->tos;
    return ps->parr[ps->tos];
}

void initStack(Stack *ps,int size)
{
    ps->parr = malloc(sizeof(int)* size);
    assert(ps->parr /*!= NULL*/);
    ps->size = size;
    ps->tos =0;
}

void cleanupstack(Stack *ps)
{
    free(ps->parr);
}
