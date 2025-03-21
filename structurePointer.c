#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearBuffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    //one member of the struct is a pointer
    struct Person
    {
        char* name;
        int age;
    }; // we could name the struct directly here before ;
    
    // instead of the below we could name the above struct you before ;
    struct Person you; 

    you.name = malloc(sizeof(char) * 20);

    if(you.name == NULL)
    {
        puts("unable to allocate memory\n");
        exit(1);
    }

    printf("enter your name : ");
    fgets(you.name , 20 , stdin);
    printf("enter your age : ");
    scanf("%d" , &you.age);

    printf("your name is : %s", you.name);
    printf("your age is : %d\n" , you.age);

    free(you.name);

    clearBuffer();
    
    //the whole struct is a pointer

    struct Student{
        char name[20];
        int id;
    }*yourSon;

    yourSon = malloc(sizeof(struct Student));

    if(yourSon == NULL)
    {
        puts("unable to allocate memory");
        exit(1);
    }

    printf("enter your son's name : ");
    fgets(yourSon->name , 20 , stdin);
    printf("enter your son's id : ");
    scanf("%d" , &yourSon->id);

    printf("your son'name is : %s", yourSon->name);
    printf("your son'age is : %d\n" , yourSon->id);

    //clean the memory
    free(yourSon);

    return 0;
}