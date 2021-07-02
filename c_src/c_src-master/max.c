#include <stdio.h>
//#define MAX(a,b) ((a) > (b)) ? (a) : (b)

extern inline int findmax(int a, int b)
{
    return (a>b) ? a : b;
}

int main()
{
    int a= 100;
    int b= 200;
    
    int max = findmax(a,b);
    //int max = (a>b) ? a : b;
    //int max = MAX(a,b);
    //int max = MAX(++a,b); // int max = ((++a)) > (b)) ? (++a) : (b);  a =102  (X)
    
    printf("max : %d\n",max);
    
    return 0;
}
