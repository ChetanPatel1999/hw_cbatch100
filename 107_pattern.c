#include <stdio.h>
int main()
{
    int i, j;
    for (i = 69; i >=65; i--)//4
    {
        for (j = 65; j <= i; j++)//6
        {
            printf("%c ",j);  
        }                     
        printf("\n");        
    }                          
}                             
//65 66 67 68 69
//65 66 67 68
//65 66 67
//65 66
//65