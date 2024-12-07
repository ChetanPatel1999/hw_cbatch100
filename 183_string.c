// wap to print reverse string of given string.
#include <stdio.h>
#include <string.h>
void reverse(char ch[])
{
    int i;
    printf("reverse string : ");
    for (i = strlen(ch) - 1; i >= 0; i--) //-1
    {
        printf("%c", ch[i]); // natehc
    }
}
void main()
{
    char ch[50];
    printf("enter a string : ");
    gets(ch); // chetan
    printf("string is : %s\n", ch);
    reverse(ch);
}