#include <stdio.h>
#include <string.h>

void center_text(int width , char* text)
{
    int len,indent,s;

    len = strlen(text);
    indent = (width-len)/2;

    for(s=0;s<indent;s++)
        putchar(' '); //wtite a space to stdout
    
    printf("%s\n", text);
}

int main(void)
{
    char* list[] = {"Hello world" , "March sales" , "where are you going?"};

    int width = 40;
    int i;
    //size of the array     
    int num_elements = sizeof(list)/sizeof(list[0]);

    for(i=0; i<num_elements; i++)
    {
        center_text(width,list[i]);
    }

    return 0;
}