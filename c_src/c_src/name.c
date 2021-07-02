#include <stdio.h>

int main()
{
    //char name[21] = {};
    char buf[100];
    char *name = buf;
    
    
    printf("name :");
    scanf("%20s" ,name);
        
    printf("name : %s\n",name);
    return 0;
}
