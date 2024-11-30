// wap to print square of all array element.
#include <stdio.h>
void display_sqr(int arr[], int size) // 66
{
    int i;
    printf("array element square are :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]*arr[i]);
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
    display_sqr(arr1, 5);
    display(arr2, 3);
    display_sqr(arr2, 3);
    display(arr3, 7);
    display_sqr(arr3, 7);
}