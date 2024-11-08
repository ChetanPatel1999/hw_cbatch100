#include <stdio.h>
void main()
{
    int num;
    printf("enter  a num : ");
    scanf("%d", &num); // 500
    if (num > 500)
    {
        printf("%d is greater than 500", num);
    }
    else if (num < 500)
    {
        printf("%d is less than 500", num);
    }
    else
    {
        printf("num is equal to 500");
    }
}