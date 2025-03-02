#include <stdio.h>

int main()
{
    /*char array*/
    char s1[] = "abcde";
    s1[0] = 'X'; //can be modified (the array on stack memory)

    //s1++; // cannot incr value of array type

    //s1 = "new string" // array type not assignable
    printf("%s\n", s1);
    printf("size of s1 : %d\n" , sizeof(s1)); // size of the array('\0' included)


    /*char pointer*/

    char* s2 = "abcde";

    //s2[0] = 'X'; //cannot be modified (segmentation fault)

    s2++; // we can increase the value (will point to next char)

    printf("%s\n", s2);

    s2 = "Hello world"; // s2 point to another string literal
    printf("%s\n", s2);

    printf("size of s2 : %d\n" , sizeof(s2));// size of the pointer (8 byte here)
                                             //s2 in pointer var on stack 

    return 0;
}