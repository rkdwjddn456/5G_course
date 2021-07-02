#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

void printDate(struct date *pd)
{
    //printf("(%d/%d/%d)\n",(*pd).year,(*pd).month,(*pd).day);
    printf("(%d/%d/%d)\n",pd->year,pd->month,pd->day);
}
/*
void printDate(struct date d)
{
    printf("(%d/%d/%d)\n",d.year,d.month,d.day);
}
*/
int main()
{
    struct date today;
    today.year = 2021;
    today.month = 1;
    today.day =13;
    
    //struct date d;
    //d = today;
    
    struct date birthday = {2005, 8, 2};
    
    //printDate(today);
    printDate(&today);
    
    return 0;
}
