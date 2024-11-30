// wap to find a element in array.
#include <stdio.h>
int find_element(int arr[], int size, int search) // 66
{
    // 3, 4, 6, 2, 6, 88, 14
    int i;
    for (i = 0; i < size; i++) // 1
    {
        if (search == arr[i])
        {
            return 1;
        }
    }
    return 0;
}
void main()
{
    int arr1[5] = {121, 34, 66, 788, 90};       // 788
    int arr2[3] = {55, 23, 9};                  // 23
    int arr3[7] = {3456, 6, 669, 2, 6, 88, 14}; // 88
    if (find_element(arr3, 7, 6))
    {
        printf("element is found");
    }
    else
    {
        printf("element is not found");
    }
}