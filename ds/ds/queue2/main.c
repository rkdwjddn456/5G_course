#include <stdio.h>
#include "queue2.h"
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
