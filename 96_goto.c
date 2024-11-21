// wap to print table using goto stmnt.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);
    i = 1;
lable:
    printf("%d \n", i*n); // 2 4
    i++; // 4
    if (i <= 10)
    {
        goto lable;
    }
}