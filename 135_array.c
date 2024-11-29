// wap to take array element form user and display them nad also display sum of all element.
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
    // code for sum array element
    // 12 34 56 78 90
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];//102
    }
    printf("\nsum of all array element is : %d",sum);
}