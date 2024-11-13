//wap to print table of given number.
#include <stdio.h>
void main()
{
    int i,tab,n;
    printf("enter a num :");
    scanf("%d",&n);//4
    for (i = 1; i <= 10; i++)//5
    {
        tab=i*n;
        printf("%d * %d = %d \n",n ,i,tab);
    }
}