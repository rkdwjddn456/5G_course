#include <stdio.h>
#include "list.h"

void printint(const void* pdata)
{
    printf("%d ",*(int *) pdata);
}

void printdouble(const void* pdata)
{
    printf("%f ",*(double*) pdata);
}
int main()
{
    List list1, list2;
    initList(&list1, sizeof(int));
    initList(&list2, sizeof(double));
    
    int i =4;
    insertFirstNode(&list1,&i);
    i=2;
    insertFirstNode(&list1,&i);
    i=1;
    insertFirstNode(&list1,&i);
    int j=2;
    i=3;
    insertNode(&list1,&j,&i);
    deleteNode(&list1, &j);
    
    printList(&list1,printint);
    
    double d= 4.4;
    insertFirstNode(&list2,&d);
    d=2.2;
    insertFirstNode(&list2,&d);
    d=1.1;
    insertFirstNode(&list2,&d);
    double f = 2.2;
    d= 3.3;
    insertNode(&list2,&f,&d);
    deleteNode(&list2, &f);
    
    printList(&list2,printdouble);
    
    cleanupList(&list1);
    cleanupList(&list2);
    
    return 0;
}
