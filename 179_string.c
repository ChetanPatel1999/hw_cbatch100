// wap to find length of string without using strlen().
#include <stdio.h>
void main()
{
    char ch[50];
    printf("enter a string : ");
    gets(ch);//chetan
    printf("string is : %s\n",ch);
    int i,c=0;
    for(i=0;ch[i]!='\0';i++)
    {
     c++;//6
    }
    printf("string length : %d",c);

}