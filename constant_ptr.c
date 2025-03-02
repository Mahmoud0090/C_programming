#include <stdio.h>

int main()
{   
    int x = 10;
    int y = 20;

    const int *ptr = &x; // Pointer to a constant integer

    // *ptr = 30; // ERROR: Cannot modify the value pointed to by ptr
    printf("Value of x: %d\n", *ptr); // Output: 10

    ptr = &y; // Allowed: Pointer can point to a different location
    printf("Value of y: %d\n", *ptr); // Output: 20





    int *const ptr1 = &x; // Constant pointer to an integer

    *ptr1 = 6;
    printf("Value of x: %d\n", *ptr1); // Output: 6

    //ptr1 = &y; // ERROR: Cannot change the pointer to point to a different location
            
    

    const int *const ptr2 = &x; // Constant pointer to a constant integer

    // *ptr = 30; // ERROR: Cannot modify the value pointed to by ptr
    // ptr = &y;  // ERROR: Cannot change the pointer to point to a different location

    printf("Value of x: %d\n", *ptr2); // Output: 10


    return 0;
}