// built- in function
// strlwr() :- its convert string in lower case
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50];
    printf("enter a string : ");
    gets(ch);
    printf("string is : %s\n", ch);
    strlwr(ch);
    printf("lower case string : %s ", ch);
}