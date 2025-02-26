#include <stdio.h>

// uesing static keyword won't let this function be accessable from outside,
//only visible within lib.c file

static void print_value(double value , int times)
{
    for(int i=0 ; i<times; i++)
        printf("%.3f\n", value);
}


//this func will be accessed from outside , and this func use static func
void report_value(double value)
{
    if(value > 1000)
        printf("value out of range\n");
    else
        print_value(value , 3);
}