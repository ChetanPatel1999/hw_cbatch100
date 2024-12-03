#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr = &arr[0], i;
    printf("enter array element :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr = &arr[0];
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 2
    {
        printf("%d \n", *ptr);
        ptr++; // 408
    }
}