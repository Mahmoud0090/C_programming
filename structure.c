#include <stdio.h>
#include <stdint.h>
#include <string.h>

struct Pixel
{
    int horizontal;
    int vertical;
    char color;
}p = {433,546,'b'};

/*nested structures*/

struct date
{
    uint8_t day;
    uint8_t month;
    uint16_t year;
};

typedef struct human
{
    struct date birthday;
    char name[32];
}person;

//we can define a variable of the struct and initialize values
/* struct human
{
    struct date birthday;
    char name[32];
}john = {
    {4,11,1999},
    "John white"
}; */


int main()
{
    /* p.horizontal = 34;
    p.vertical = 56;
    p.color = 'r'; */

    person john;

    john.birthday.day = 12;
    john.birthday.month = 6;
    john.birthday.year = 1999;
    strcpy(john.name , "John white");

    printf("john full name is : %s\n" , john.name);

    return 0;
}