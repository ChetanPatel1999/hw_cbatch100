// wap to print factors of given number.
// if a number that can be divided into another number
//  without a remainder so all another number is factors of that number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); //12 
    printf("factors of %d : ",n);      
    for (i = 1; i <= n; i++) //16
    {
        if(n%i==0)
        {
            printf("%d ",i);// 1 3 5 15
        }
    }
}