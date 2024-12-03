// pointer to array
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr = &arr[0];
    printf("array element are : \n");
    printf("%d \n", *ptr);
    ptr++;
    printf("%d \n", *ptr);
    ptr++;
    printf("%d \n", *ptr);
    ptr++;
    printf("%d \n", *ptr);
    ptr++;
    printf("%d \n", *ptr);
}