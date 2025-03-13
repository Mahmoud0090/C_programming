#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *buffer;

    buffer = malloc(sizeof(int) * 20);

    if(buffer == NULL)
    {
        puts("unable to allocate memory");
        exit(1);
    }

    puts("buffer allocated\n");

    for(int i = 0;i<20 ; i++)
    {
        *(buffer + i) = 10 * (i+1);
        printf("%d ", *(buffer + i));
    }

    free(buffer);

    puts("\nbuffer freed");

    return 0;
}