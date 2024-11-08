// wap to check given char is alphabet or digit or special symbol.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("char is alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("char is digit");
    }
    else{
        printf("char special symbol");
    }
}