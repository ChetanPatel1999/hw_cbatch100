// string take user and display them.
//gets():- take string from user
//puts():- display string on output screen
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter a string : ");
    gets(name);
    printf("name of student:");
    puts(name);
}