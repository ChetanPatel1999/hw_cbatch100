//best way of take string and display string
#include<stdio.h>
void main()
{
 char ch[50];
 int i;
 printf("enter a string : ");
 gets(ch);
 printf("string is : %s\n",ch);
 for(i=0;ch[i]!='\0';i++)
 {
    printf("%c\n",ch[i]);
 }
}