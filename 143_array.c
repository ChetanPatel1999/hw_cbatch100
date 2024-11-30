// wap to print array element in reverse order.
#include <stdio.h>
void reverse_arr(int arr[], int size) // 66
{
    int i;
    printf("array element in reverse order  are :\n");
    for (i = size-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void display(int arr[], int size) // 66
{
    int i;
    printf("array element are :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr1[5] = {121, 34, 66, 788, 90};
    int arr2[3] = {55, 23, 9};
    int arr3[7] = {3456, 6, 669, 2, 6, 88, 6};
    display(arr1, 5);
    reverse_arr(arr1, 5);
    display(arr2, 3);
    reverse_arr(arr2, 3);
    display(arr3, 7);
    reverse_arr(arr3, 7);
}