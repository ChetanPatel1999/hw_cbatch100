// string take user and display them.
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter a string : ");
    scanf("%[^\n]s", name);
    printf("name of student: %s", name);
}