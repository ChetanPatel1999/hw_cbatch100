// wap to print numbers in given range.
#include <stdio.h>
void main()
{
    int s, e, i;
    printf("enter starting value :");
    scanf("%d", &s); // 20
    printf("enter ending value :");
    scanf("%d", &e); // 5
    if (e > s)
    {
        for (i = s; i <= e; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = s; i >= e; i--)
        {
            printf("%d ", i);
        }
    }
}