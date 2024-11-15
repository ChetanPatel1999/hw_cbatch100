// wap to print table of given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter  a number : ");
    scanf("%d", &n); //4
    i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d\n",n,i, i * n);
        i++;
    }
}