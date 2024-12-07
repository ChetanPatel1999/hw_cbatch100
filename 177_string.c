// built- in function
// strcat() :- its combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[50], ch2[50];
    printf("enter a name : ");
    gets(ch1);
    printf("enter sirname : ");
    gets(ch2);
    printf("name : %s\n",ch1);
    printf("sirname : %s\n",ch2);
    strcat(ch1," ");
    strcat(ch1,ch2);
    printf("full_name : %s",ch1);
}