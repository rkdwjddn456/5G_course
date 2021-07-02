#ifndef STACK_H
#define STACK_H


typedef struct stack
{    
    //int *parr;
    void *parr;
    int elesize;
    int size;
    int tos;
} Stack;

void push(Stack *ps ,const void* pdata);
//int pop(Stack *ps);
void initStack(Stack *ps, int size,int elesize);
void cleanupstack(Stack *ps);
void pop(Stack *ps,void *pdata);

#endif
