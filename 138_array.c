// wap to print table of all given number of array.
#include <stdio.h>
void main()
{
    int i, j;
    int arr[5];
    printf("enter array elements :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array elements :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++) // 3
    {
        printf("table of %d : \n", arr[i]);
        for (j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d \n", arr[i], j, arr[i] * j);
        }
    }
}