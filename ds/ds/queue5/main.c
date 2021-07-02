#include <stdio.h>
#include "queue4.h"

int main()
{
    Queue q1, q2;
    initqueue(&q1,10,sizeof(int));
    initqueue(&q2,100,sizeof(double));
    
    int i;
    i =100;
    push(&q1,&i);
    i=200;
    push(&q1,&i);
    i =300;
    push(&q1,&i);
    
    int j;
    pop(&q1,&j);
    printf("1st pop () : %d\n",j);
    pop(&q1,&j);
    printf("2st pop () : %d\n",j);
    pop(&q1,&j);
    printf("3st pop () : %d\n",j);
    
    
    double d;
    d= 1.1; push(&q2,&d);
    d= 2.2; push(&q2,&d);
    d= 3.3; push(&q2,&d);
    
    double f;
    pop(&q2,&f); printf("q2 1st pop() : %f\n",f);
    pop(&q2,&f); printf("q2 2st pop() : %f\n",f);
    pop(&q2,&f); printf("q2 3st pop() : %f\n",f);
    queuecleanup(&q1);
    queuecleanup(&q2);
    
    return 0;
}
