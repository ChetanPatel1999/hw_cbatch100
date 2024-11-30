// wap to find max element in given array.
#include <stdio.h>
int max_element(int arr[], int s)
{
    // 3, 4, 6, 2, 6, 88, 14
    int i, max = arr[0];
    for (i = 0; i < s; i++) // 3
    {
        if (max < arr[i])
        {
            max = arr[i]; // 88
        }
    }
    return max;
}
void main()
{
    int arr1[5] = {121, 34, 66, 788, 90};  // 788
    int arr2[3] = {55, 23, 9};              // 23
    int arr3[7] = {3456, 4, 669, 2, 6, 88, 14}; // 88
    printf("arr1 max element : %d\n", max_element(arr1, 5));
    printf("arr2 max element : %d\n", max_element(arr2, 3));
    printf("arr3 max element : %d\n", max_element(arr3, 7));
}