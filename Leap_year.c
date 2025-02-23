#include <stdio.h>

int leapyear(int year)
{
    if((year%4==0 && year%100!=0) || (year%400==0))
        return 1;

    return 0;
}

int main(void)
{
    int years[] = {1928 , 1952 , 2012 , 2021 , 2024, 2025 , 2028 , 2027};

    int size = sizeof(years)/sizeof(years[0]);

    int i;

    for(i=0;i<size;i++)
    {
        printf("the result of year %d is : %d\n", years[i] , 
            leapyear(years[i]));
    }

    return 0;
}