// wap to print given element appearance in array.
#include <stdio.h>
int appear_element(int arr[], int size, int search) // 66
{
    // 3, 4, 6, 2, 6, 88, 14
    int i,c=0;
    for (i = 0; i < size; i++) // 1
    {
        if (search == arr[i])
        {
          c++;
        }
    }
    if(c==0)
    {
        return 0;
    }
    else{
        return c;
    }
}
void main()
{
    int arr1[5] = {121, 34, 66, 788, 90};       // 788
    int arr2[3] = {55, 23, 9};                  // 23
    int arr3[7] = {3456, 6, 669, 2, 6, 88, 6}; // 88
    int res=appear_element(arr3, 7, 888);
    if (res)
    {
        printf("element is appear %d times",res);
    }
    else
    {
        printf("element is not found");
    }
}