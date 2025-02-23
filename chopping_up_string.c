#include <stdio.h>
#include <stdlib.h>

/*chopping up a string from left and right
and using offset , int len in the number of character to chopp
and char*s in the char pointer to a string*/

char *left(char *s , int len)
{
    char* buff;
    int x;

    /*allocate storage*/
    buff = (char *)malloc(sizeof(char) * len+1);
    if(buff == NULL)
        exit(1);
        
    for(x=0;x<len;x++) /*copy len chars*/
        *(buff+x) = *(s+x);
    *(buff+x) = '\0';   /*cap the string*/

    return (buff);
}

char *right(char *s , int len)
{
    char* buff;
    char* start;
    int x;

    /*allocating storage*/
    buff = (char *)malloc(sizeof(char) * len+1);
    if(buff==NULL)
        exit(1);
    start = s;
    while(*start != '\0')
        start++;
    /*backup*/
    for(x=0;x<len;x++)
        start--;

    for(x=0;x<len;x++)
        *(buff+x) = *(start+x);
    *(buff+x) = '\0';   /*cap the string*/

    return (buff);
}

char *mid(char *s , int offset , int len)
{
    char* buff;
    int x;

    /*allocating storage*/
    buff = (char *) malloc(sizeof(char) * len + 1);
    if(buff == NULL)
        exit(1);
    
    for(x=0;x<len;x++)
    {
        *(buff+x) = *(s+(offset-1)+x); /*counting start from 0, therefore 
                                        we substract 1 from offset*/
        if(*(buff+x) == '\0') /*avoid overflow*/
            break;
    }
    *(buff+x) = '\0';   /*cap the string*/
    return (buff);
}

int main(void)
{
    char string[] = "once upon a time, there was a string";

    printf("Original string is : %s\n" , string);
    printf("Left %d character : %s\n" , 16 , left(string, 16));
    printf("Right %d character : %s\n" , 18 , right(string, 18));
    printf("Middle %d character with %d offset : %s\n", 
        11, 13 , mid(string,13,11));
    
    return 0;
}