#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)//2
    {
        for (j = i; j <= 5; j++)//6
        {
            printf("%d ",j);  
        }                     
        printf("\n");        
    }                          
}                             