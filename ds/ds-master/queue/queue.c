#include <stdio.h>
int queue[10];
int front;
int rear;

void push(int data)
{
    queue[rear]=data;
    ++rear;   
}

int pop()
{
    int tmp = front;
    ++front;
    return queue[tmp];
}
int main()
{
    push(100);
    push(200);
    
    printf("1st pop () : %d\n",pop());
    
    push(300);
    printf("2st pop () : %d\n",pop());
    printf("3st pop () : %d\n",pop());
    
    return 0;
}
