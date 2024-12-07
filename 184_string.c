// wap to count word in given string.
#include <stdio.h>
void main()
{
    char ch[50];
    printf("enter a string : ");
    gets(ch); // chetan patel
    printf("string is : %s\n", ch);
    int i,c=0;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ')
        {
            c++;
        }
    }
    printf("total word : %d",c+1);
}