#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)//4
    {
        for (j = i; j >= 1; j--)//6
        {
            printf("%d ",i);  
        }                      
        printf("\n");        
    }                         
}                             