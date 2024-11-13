// awp to print factorial of given number.
//  5 = 1*2*3*4*5 = 120
//  4 = 1*2*3*4 =24
//  3 = 1*2*3 = 6
//  6 = 1*2*3*4*5*6 =720
#include <stdio.h>
void main()
{
    int i, n,fact=1;
    printf("enter a num : ");
    scanf("%d", &n); //6
    for (i = 1; i <= n; i++) 
    {
       fact = fact*i; // fact = 720
    }
    printf("factorial of %d = %d",n,fact);
}