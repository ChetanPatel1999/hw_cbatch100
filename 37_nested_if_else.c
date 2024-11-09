// wap to check given number is  even-positive  or
// even -nagative or odd-positive or odd-nagative.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); //12
    if (num == 0)
    {
        printf("num is zero");
    }
    else if (num % 2 == 0)
    {
        if (num > 0)
        {
            printf("even-postive");
        }
        else
        {
            printf("even-nagative");
        }
    }
    else
    {
        if (num > 0)
        {
            printf("odd-postive");
        }
        else
        {
            printf("odd-nagative");
        }
    }
}
