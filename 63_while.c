// wap to print sum of all element  1 to n.
#include <stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter  a number : ");
    scanf("%d",&n);//10
    i=1;
    while (i <= n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of all element : %d ",sum);
   
}