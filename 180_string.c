// wap to make fuction for find string length.
#include <stdio.h>
int length(char str[])
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        count++; // 6
    }
    return count;
}
void main()
{
    char ch[50];
    printf("enter a string : ");
    gets(ch); // chetan
    printf("string is : %s\n", ch);
    int c = length(ch);
    printf("string length : %d", c);
}