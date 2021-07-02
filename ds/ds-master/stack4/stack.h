#ifndef STACK_H
#define STACK_H
//#define ARRAYSIZE 100

typedef struct stack
{
    //int array[ARRAYSIZE];
    int *parr;
    int size;
    int tos;
} Stack;

void push(Stack *ps , int data);
int pop(Stack *ps);
void initStack(Stack *ps, int size);
void cleanupstack(Stack *ps);

#endif
