#include <stdio.h>


int main()
{
    char *fruits[4] = {"banana" , "apple" , "orange" , "watermelon"};

    for(int i = 0 ; i<4 ; i++)
    {
        printf("%s\n" , *(fruits+i));
    }

    //swap is done by swaping only the addresses
    char *temp;

    temp = fruits[1];
    fruits[1] = fruits[2];
    fruits[2] = temp;

    puts("--------------------------------");

    for(int i = 0 ; i<4 ; i++)
    {
        printf("%s\n" , *(fruits+i));
    }

    //using ** to get characters first * will dereference the pointer
    //to get the string and second * will dereference to ge the first char

    puts("-------------------------------------");

    for(int i = 0 ; i<4 ; i++)
    {
        //printf("%c\n" , **(fruits+i)); 
        //this is easier adding 1 to access second char
        printf("%c\n" , *(*(fruits+i) + 1));
    }

    return 0;
}