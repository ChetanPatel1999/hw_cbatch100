// wap to print number 1 to n.
#include <stdio.h>
void main()
{
    int i,n;
    printf("enter  a number : ");
    scanf("%d",&n);
    i=1;
    while (i <= n)
    {
        printf("%d  ",i);//1 2  3 4 5
        i++;//6
    }
   
}