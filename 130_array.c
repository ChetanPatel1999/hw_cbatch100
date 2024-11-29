// example of array
#include <stdio.h>
void main()
{
    int a[5] = {12, 34, 56, 78, 90};
    printf("size of array : %d\n",sizeof(a));
    printf("array element are : \n");
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
    printf("%d\n", a[3]);
    printf("%d\n", a[4]);
    a[2] = 500;
    printf("\narray element are : \n");
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
    printf("%d\n", a[3]);
    printf("%d\n", a[4]);
}