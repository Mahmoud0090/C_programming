#include <stdio.h>

int main()
{
    int arr[5] = {1,3,4,5,6};

    printf("    arr : %zu\n" , arr);
    printf("arr + 1 : %zu\n" , arr+1);//will move to the address of the next
                                    //element in this case (4 byte)


    printf("   &arr : %zu\n" , &arr);
    printf("&arr + 1: %zu\n" , &arr+1); // will add the size of the array (5*4)
                                        //will be 20 more than &arr

    
    int matrix[3][4] = 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    printf("     matrix[1] : %zu\n" , matrix[1]);//pointer to first element 5
    printf(" matrix[1] + 1 : %zu\n" , matrix[1] + 1);
    printf("*matrix[1] + 1 : %zu\n" , *(matrix[1]+1));//output 6


    printf("    &matrix[1] : %zu\n" , &matrix[1]);//pointer to entire 1st row
    printf("&matrix[1] + 1 : %zu\n" , &matrix[1] + 1);//add the size of the 
                                                      //row 16 byte(4*4)


    return 0;
}