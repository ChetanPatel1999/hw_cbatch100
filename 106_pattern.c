#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)//4
    {
        for (j = i; j >= 1; j--)//0
        {
            printf("%d ",i); // 5 5 5 5 5 
        }                    // 4 4 4 4 
        printf("\n");        
    }                         
}                             