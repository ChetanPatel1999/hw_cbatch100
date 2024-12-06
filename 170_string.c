// string take user and display them.
//fgets():- take string from user
//fputs():- display string on output screen
#include <stdio.h>
void main()
{
    char name[10];
    printf("enter a string : ");
    fgets(name,10,stdin);
    printf("name of student:");
    fputs(name,stdout);
}