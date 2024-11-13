// wap to print even number series.
#include <stdio.h>
void main()
{
    int n, i;
    printf("enter a num : ");
    scanf("%d", &n); // 20
    printf("even number series : ");
    for (i = 1; i <= n; i++) // 6
    {

        if (i % 2 == 0)
        {
            printf("%d ", i); // 2 4 6
        }
    }
}