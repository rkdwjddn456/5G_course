#include <stdio.h>

void printStringArray1(char (*string1)[20],int size)
{
    printf("string 1\n");
    
    for(int i =0 ; i< size; ++i)
    {        
        printf("%s\n",string1[i]);
    }
}

void printStringArray2(char **string2,int size) //*string2[5]
{
    printf("string 2\n");
    
    for(int i =0; i<size ; ++i)
    {   
        printf("%s\n",string2[i]);
    }
}

int main()
{
    char cities1[5][20] ={
        "Seoul", "Los Angeles", "Paris" , "Rio de janeiro", "Rome"
        };
    char *cities2[5] ={
        "Seoul", "Los Angeles", "Paris" , "Rio de janeiro", "Rome"
        };
   printStringArray1(cities1,5);
   printStringArray2(cities2,5);
     
    return 0;   
}
