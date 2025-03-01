#include <stdio.h>
#include <stdlib.h>

#define size 5
//the below function wont work as func cannot
//return array type int[]

/*int [] my_func()
{

}*/

// this also not work as we return local variable

/*int* set_array(int value)
{
    int local_array[size];
    int i = 0;
    for(i=0;i<size;i++)
        local_array[i] = value;
    
    return local_array;
}*/

//directry modify the array by passing it to the func
void set_array(int value , int* arr)
{
    int i = 0;
    for(i=0;i<size;i++)
        arr[i] = value;
}

// returning static array will work
int* return_static_arr(int val)
{
    static int static_ar [size];
    int i = 0;

    for(i=0;i<size;i++)
        static_ar[i] = val;
    
    return static_ar;
}

//returning dynamic array will work
int* dynamic_arr(int value)
{
    int *array = malloc(sizeof(int) * size); // size is 5
    int i = 0;

    for(i=0;i<size;i++)
        array[i] = value;
    
    return array;
}


int main()
{
    int arr[] = {1,4,5,6,7};
   
    int* res = arr;

    printf("res[3] : %d\n" , res[3]);
    printf("arr address : %p\n", arr);
    printf("res address : %p\n" , res);


    set_array(4, arr);
    int i = 0;
    for(i=0;i<size;i++)
        printf("%d\n", res[i]);

    
    res = return_static_arr(10);

    for(i=0;i<size;i++)
        printf("%d\n", res[i]);



    res = dynamic_arr(20);
    for(i=0;i<size;i++)
        printf("%d\n", res[i]);
    
    
    free(res);

    return 0;
}