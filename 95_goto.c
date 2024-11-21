// wap to print even number series using goto stmnt.
#include <stdio.h>
void main()
{
    int i;
    i = 1;
lable:
    if (i % 2 == 0)
    {
        printf("%d ", i);// 2 4
    }
    i++;//4
    if (i <= 20)
    {
        goto lable;
    }
}