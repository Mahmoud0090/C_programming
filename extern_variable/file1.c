#include <stdio.h>
#include "file2.h"


void modifyGlobalVar()
{
    // this value is in file2.h file , it is extern value
    globalvar = 100;
    printf("the value of the globalvar is file1.c is : %d\n" , globalvar);
}

int main(void)
{
    
    printGlobalvar();

    modifyGlobalVar();

    return 0;
}