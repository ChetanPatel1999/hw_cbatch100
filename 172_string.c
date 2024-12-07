//built- in function
//strlen() :- its return string length
#include<stdio.h>
#include<string.h>
void main()
{
 char ch[50];
 printf("enter a string : ");
 gets(ch);
 printf("string is : %s",ch);
 int l;
 l=strlen(ch);
 printf("\nstring length is : %d",l);
}