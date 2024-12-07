// built- in function
// strcpy() :- its copy one string into another string type variable
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[50], ch2[50];
    printf("enter a string : ");
    gets(ch1); // ram
    // strcpy(ch2,ch1);
    strcpy(ch2, "hi");
    printf("string is : %s\n", ch1);
    printf("string is : %s\n", ch2);
}