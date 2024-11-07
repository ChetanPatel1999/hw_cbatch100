// wap to check given alphabet is vovel or consonant.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u')
    {
        printf("char is vovel ");
    }
    else
    {
        printf("char is consonant");
    }
}