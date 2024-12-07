// built- in function
// strcmp() :- its compare two string , same or different string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[50], ch2[50];
    printf("enter a name : ");
    gets(ch1);
    printf("enter sirname : ");
    gets(ch2);
    if (strcmp(ch1,ch2)==0)
    {
        printf("string are same ");
    }
    else
    {
        printf("string are different");
    }
}