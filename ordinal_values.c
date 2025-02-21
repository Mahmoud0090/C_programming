#include <stdio.h>

char* ordinal(int x)
{
    char* ord;

    if(x==0)
    {
        ord = "no cardinal";
        return ord;
    }
    if(x==11 || x==12 || x==13)
    {
        ord = "th";
        return ord;
    }

    __uint8_t mod = x%10;

    switch (mod)
    {
    case 1:
        ord = "st";
        break;
    case 2:
        ord = "nd";
        break;
    case 3:
        ord = "rd";
        break;
    default:
        ord = "th";
        break;
    }
    return ord;
}

int main(void)
{
    char* ord;

    for(int i = 1 ; i<=50 ; i++)
    {
        ord = ordinal(i);
        printf("%d%s\n", i , ord);
    }

    return 0;
}