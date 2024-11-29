// wap to take array element form user and display only even element.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n);
    int a[n], i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++) // 1
    {
        scanf("%d", &a[i]);
    }
    printf("array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    // code for only even elements
    printf("\neven array element are : ");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            printf("%d ", a[i]);
        }
    }
}