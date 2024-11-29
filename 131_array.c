// example of array
#include <stdio.h>
void main()
{
    int a[5] = {12, 34, 56, 78, 90};
    printf("array element are : \n");
    int i;
    for(i=0;i<5;i++)//5
    {
      printf("%d\n", a[i]);  
    }
    a[2] = 500;
    printf("\narray element are : \n");
    for(i=0;i<5;i++)//5
    {
      printf("%d\n", a[i]);  
    }
}