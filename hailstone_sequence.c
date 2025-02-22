#include <stdio.h>

/*hailstone sequence is when we have an even number -> numebr/=2
and we have an odd number -> number = (number*3)+1 until we reach 1*/

void hailstone_sequence(int num)
{
    int count = 0;
    while(num!=1)
    {
        if(num%2==0)
            num /= 2;
        else
            num = (num*3)+1;

        count++;
        printf("%d  ", num);
    }

    printf("\nthe sequence length is : %d\n" , count);
}

int main(void)
{
    int length;
    printf("Enter a value : ");
    scanf("%d" , &length);

    hailstone_sequence(length);
    return 0;
}