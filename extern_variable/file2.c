#include <stdio.h>

int globalvar = 0;

void printGlobalvar()
{
    printf("the value of globalvar in file2.c is : %d\n" , globalvar);
}