#include <stdio.h>
#include <string.h>

int main()
{
    char *str1 = "hello world";
    
    int len = strlen(str1);
    printf("len : %d\n", len);
    
    char str2[20];
    strcpy(str2, str1);
    
    printf("str2 : %s\n",str2);
    
    if(strcmp(str1,str2) == 0) printf("str 1 and str2 are eqaul\n");
    else
        printf("str 1 and str2 are not eqaul\n");
        
    strcat(str2," ");
    strcat(str2,"Kang");
    //strcat(str2,"Jungwooddd");
    
    printf("str2 : %s\n",str2);    
    
    return 0;
}
