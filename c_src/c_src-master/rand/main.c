#include <stdio.h>
#include <time.h>

int seed;

void my_srand(int s);
int my_rand();


int main()
{       
    my_srand(time(NULL));
    
    for(int i= 1; i<=10; ++i)
        printf("%d\n",my_rand());      

    return 0;
}

void my_srand(int s)
{
    seed = s;
}

int my_rand()
{
    seed = seed * 1103515245 + 12345;
    
    return((unsigned)(seed/65536) % 32768);

}
