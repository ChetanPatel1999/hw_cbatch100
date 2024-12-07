// wap to convert given string into upper case string.
#include <stdio.h>
void main()
{
    char ch[50];
    printf("enter a string : ");
    gets(ch); // abc
    printf("string is : %s\n", ch);
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32; // 98-32= 66
        }
    }
    printf("upper string is : %s\n", ch);
}