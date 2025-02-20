#include <stdio.h>
#include <stdlib.h>


typedef struct{
    __uint8_t gender : 1;
    __uint8_t age_group : 2;
    __uint8_t marital_status : 1;
    __uint8_t has_pet : 1;
    __uint8_t reserved : 3;
}PersonPreferences;

int main(void)
{
    PersonPreferences Person;

     // Set the preferences
    Person.gender = 1;          // Female (1)
    Person.age_group = 2;       // child(0),teen(1),Adult(2),senior(3)
    Person.marital_status = 0;  // Single (0)
    Person.has_pet = 1;         // Has pet (1)
    Person.reserved = 0;        // Reserved bits (unused)

    // Print the size of the structure
    printf("Size of personpreferences structure %lu bytes\n" , sizeof(PersonPreferences));

    //print preferences
    printf("Gender is %s\n" , Person.gender ? "female" : "male");
    printf("Age group : ");
    switch(Person.age_group)
    {
        case 0: printf("child\n"); break;
        case 1: printf("teen\n"); break;
        case 2: printf("adult\n"); break;
        case 3: printf("senior\n"); break;
        default: printf("no info\n"); break;
    }

    printf("Marital Status: %s\n", Person.marital_status ? "Married" : "Single");
    printf("Has Pet: %s\n", Person.has_pet ? "Yes" : "No");

    return 0;
}