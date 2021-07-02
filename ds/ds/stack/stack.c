#include <stdio.h>

int stack[100];
int tos; // top of stack

void push(int data)
{
    stack[tos] = data;
    ++tos;
    printf("%d\n",tos);
}

int pop(void)
{
    --tos;
    printf("%d\n",tos);
    return stack[tos];
}

int main()
{
    push(100);
    push(200);
    push(300);
    
    printf("1st pop : %d\n",pop());
    printf("2st pop : %d\n",pop());
    printf("3st pop : %d\n",pop());
    
    return 0;
}
