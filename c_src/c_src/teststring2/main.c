#include <stdio.h>
#include "mystring.h"

int main()
{
    char *str = "hello, world";
    
    int len = my_strlen(str);
    printf("len: %d\n",len);
    
    char str2[20];
    my_strcpy(str2,str);
    
    printf("str2: %s\n",str2);
    
    if(my_strcmp(str,str2) == 0)
        printf("str and str2 is equal\n");
    else
        printf("str and str2 is not equal");
    
    my_strcat(str2," ");
    my_strcat(str2,"Kang");
    printf("str2: %s\n",str2);
    
    return 0;
}
