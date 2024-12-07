// built- in function
// strupr() :- its convert string in upper case
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50];
    printf("enter a string : ");
    gets(ch);
    printf("string is : %s\n", ch);
    strupr(ch);
    printf("upper case string : %s ", ch);
}