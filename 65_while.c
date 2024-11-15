// wap to print sum of all even element  1 to n.
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter  a number : ");
    scanf("%d", &n); // 10
    i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    printf("sum of all even element : %d ", sum);
    // 2+ 4+ 6+8 +10
}