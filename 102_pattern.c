#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//2
    {
        for (j = 1; j <= 5; j++)//6
        {
            printf("%d ",i);// 1 1 1 1 1
        }                   // 2 2 2 2 2
        printf("\n");       // 
    }
}