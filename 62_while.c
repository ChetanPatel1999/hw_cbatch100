// wap to print even number 1 to n.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter  a number : ");
    scanf("%d", &n);//20
    i = 1;
    printf("even number serise : ");
    while (i <= n)
    {
        if(i%2==0)
        {
            printf("%d  ", i);// 2 4
        }
        i++;//4
    }
}