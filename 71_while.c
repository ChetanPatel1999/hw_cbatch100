// wap to take a number from user and check number is plindrom or not.
#include <stdio.h>
void main()
{
    int num, rev = 0, rem, temp;
    printf("enter a number : ");
    scanf("%d", &num); // 121
    temp = num;
    while (num) // 0
    {
        rem = num % 10;       // 5
        rev = rev * 10 + rem; // rev = 765
        num = num / 10;
    }
    if (rev == temp)
    {
        printf("number is plindrom ");
    }
    else
    {
        printf("number is not plindrom ");
    }
}
