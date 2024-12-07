// built- in function
// strrev() :- its reverse of given string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50];
    printf("enter a string : ");
    gets(ch);
    printf("string is : %s\n", ch);
    strrev(ch);
    printf("reverse string : %s ", ch);
}