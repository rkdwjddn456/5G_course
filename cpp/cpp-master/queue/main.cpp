#include <iostream>
#include "queue.h"

int main()
{
    Queue q1(10);
    //initqueue(&q1,10);
    
    q1.push(100);
    q1.push(200);
    
    
    //printf("1st pop () : %d\n",pop(&q1));
    std::cout<<"1st pop()"<<q1.pop()<<std::endl;
    q1.push(300);
    
    std::cout<<"1st pop()"<<q1.pop()<<std::endl;
    std::cout<<"1st pop()"<<q1.pop()<<std::endl;
    //q1.queuecleanup();
    
    return 0;
}
