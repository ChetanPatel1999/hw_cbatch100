#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//3
    {
        for (j = i; j <= 5; j++)//6
        {
            printf("* ");   //
        }                   //
        printf("\n");       //
    }                       
}