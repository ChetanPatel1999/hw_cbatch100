#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//6
    {
        for (j = 1; j <= 5; j++)//6
        {
            printf("* ");// * * * * *
        }                // * * * * * 
        printf("\n");    // * * * * *
    }
    
}