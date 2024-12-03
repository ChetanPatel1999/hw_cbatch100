#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr = &arr[0],i;
    printf("array element are : \n");
    for(i=0;i<5;i++)//2
    {
     printf("%d \n",*ptr);
     ptr++;//408
    }
}