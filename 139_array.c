// wap to print sum of all array element using fuction.
#include <stdio.h>
int arr_sum(int arr[], int s)
{
    int i, sum = 0;
    for (i = 0; i < s; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
void dipslay(int arr[], int s)
{
    printf("array elments are : \n");
    int i;
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr1[5] = {12, 34, 56, 78, 90};   // 270
    int arr2[3] = {5, 23, 9};             // 37
    int arr3[7] = {3, 4, 6, 2, 6, 8, 14}; // 43
    dipslay(arr1, 5);
    printf("arr1 sum : %d\n", arr_sum(arr1, 5));
    dipslay(arr2, 3);
    printf("arr2 sum : %d\n", arr_sum(arr2, 3));
    dipslay(arr3, 7);
    printf("arr3 sum : %d\n", arr_sum(arr3, 7));
}