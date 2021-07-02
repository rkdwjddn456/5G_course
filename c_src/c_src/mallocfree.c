#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("array size:");
    scanf("%d",&size);
    
    int *parr;
    parr = malloc(sizeof(int) * size);
    
    free(parr);
    return 0;
}
