#include <stdio.h>
int main()
{
    int i, j;
    for (i = 65; i <=69; i++)//4
    {
        for (j = 69; j >= i; j--)//6
        {
            printf("%c ",j);  
        }                     
        printf("\n");        
    }                          
}                             
//E D B C A
//E D B C 
//E D B 
//E D 
//E 