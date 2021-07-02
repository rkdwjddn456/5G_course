#include <stdio.h>
#include "queue4.h"

int main()
{
    Queue q1;
    initqueue(&q1,10);
    
    push(&q1,100);
    push(&q1,200);
    
    
    printf("1st pop () : %d\n",pop(&q1));
    
    push(&q1,300);
    printf("2st pop () : %d\n",pop(&q1));
    printf("3st pop () : %d\n",pop(&q1));
    
    queuecleanup(&q1);
    
    return 0;
}
