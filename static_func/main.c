#include <stdio.h>
#include "lib.h"

//this func is found in lib.c , but since both are static we could use it here
//but if both are not static we will get an error
static void print_value(double value , int times)
{
    for(int i=0 ; i<times; i++)
        printf("%.4f\n", value);
}


int main(void)
{
    report_value(10.444);

    print_value(14.55 , 5);

    return 0;
}