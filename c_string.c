#include <stdio.h>
#include <string.h>

void clearBuffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    //char input

    char name[20] = "Mike"; //'\0' is added by the compiler

    //name = "frank"; // not assignable we use strcpy func

    strcpy(name , "David");

    printf("name is %s\n" , name);

    //////////////////////////////////////////////////////////////////////

    char str[] = {'G' , 'e' , 'o' , 'r' , 'g' , 'e' , '\0'};//'\0' must be added

    printf("name1 is %s\n", str);

    /////////////////////////////////////////////////////////////////////

    char arr[6];
    arr[0] = 'H';
    arr[1] = 'e';
    arr[2] = 'l';
    arr[3] = 'l';
    arr[4] = 'o';
    arr[5] = '\0'; // You must add the null character manually
    ///////////////////////////////////////////////////////////////////////

    /*sizeof and strlen*/

    //sizeof will count the size of '\0' also
    char obj[] = "Laptop";
    printf("the size of obj arr is : %lu\n" , sizeof(obj)); // 7 with '\0'

    //strlen will not count '\0'
    printf("the length of obj arr is : %d\n" , strlen(obj)); // 6 '\0' not icluded

    /*string input*/
    //scanf (no check for overflow , text up to space is read)
    char input[10];// 9 char with '\0'
    printf("Enter your name : ");
    //scanf("%s" , input); 
    
    //fgets (prevent buffer overflow)
    fgets(input,10,stdin); // 9 char with '\0'

    //replace the \n char with \0
    int i = 0;
    for(i=0 ; i<10 ; i++)
    {
        if(input[i] == '\n')
            input[i] = '\0';
    }
    
    printf("nice to meet you %s!\n", input);

    /////////////////////////////////////////////////////////////////////
    /*string functions*/

    //1- strcmp (return 0 if two strings are equal , non zero otherwise)


    //clear buffer for next fgets
    clearBuffer();

    char password[] = "secret\n"; //\n is included as part of password(to press enter)

    char user_input[10];

    printf("password : ");
    fgets(user_input , 10 , stdin);

    if(strcmp(password , user_input) == 0)
        printf("Entry granted\n");
    else
        printf("incorrect password\n");


    //2-copy and concatenate
    char first[16] = "George";
    char last[16] = "Washington";
    char full[32];

    strcpy(full , first);
    strcat(full , " ");
    strcat(full , last);

    printf("the full name is %s\n" , full);

    return 0;
}