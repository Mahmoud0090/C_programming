#include <stdio.h>

void increase_arr(char arr[] , size_t size)
{
    int i;

    for(i=0;i<size;i++)
    {
        arr[i]++;
        putchar(arr[i]);
    }
    putchar('\n');
}

int main()
{
    char arr[5] = {'g' , 'd' , 'k' , 'k' , 'n'};

    size_t size = sizeof(arr)/sizeof(arr[0]);

    increase_arr(arr , size);

    puts("-----------------------------");

    int nums[7] = {3,4,5,76,7,8,9};

    nums[9] = 43; // in c there is no array boundary checking
                 // and that could cause a problem as it may overwritten
                 //data in other location 

    int i;

    for(i=0;i<10;i++) 
    {
        printf("%d\n", nums[i]);
    }

    return 0;
}