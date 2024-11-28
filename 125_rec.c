// wap to print 1 to n numbers.
#include <stdio.h>
void number(int num)
{
    static int i = 1;
    printf("%d ", i);//1 2
    i++; // 3
    if (i <= num)
    {
        number(num);
    }
}
void main()
{
    number(100);
}