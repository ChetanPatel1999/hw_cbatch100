//wap to take array element form user and display them.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d",&n);
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
}