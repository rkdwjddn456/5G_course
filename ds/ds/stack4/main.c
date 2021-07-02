#include <stdio.h>
#include "stack.h"

int main()
{
    Stack s1, s2;
         
    initStack(&s1,10);
    initStack(&s2,100);
        
    push(&s1,100);
    push(&s1,200);
    push(&s1,300);
    
    push(&s2,900);
    push(&s2,800);
    push(&s2,700);
    
    printf("s1 1st pop() : %d\n",pop(&s1));
    printf("s1 2st pop() : %d\n",pop(&s1));  
    printf("s1 3st pop() : %d\n",pop(&s1));  
    
    printf("s2 1st pop() : %d\n",pop(&s2));  
    printf("s2 2st pop() : %d\n",pop(&s2));  
    printf("s2 3st pop() : %d\n",pop(&s2)); 
    
    cleanupstack(&s1);
    cleanupstack(&s2);   
    
    return 0;
}
