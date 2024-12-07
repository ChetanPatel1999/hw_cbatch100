// wap to make fuction of uppercase.
#include <stdio.h>
void upper(char ch[])
{
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32; // 98-32= 66
        }
    }
}
void main()
{
    char ch[50];
    printf("enter a string : ");
    gets(ch); // abc
    printf("string is : %s\n", ch);
    upper(ch);
    printf("upper string is : %s\n", ch);
}