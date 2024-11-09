// wap to convert given number into word only 1 to 10.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("one");
    }
    else if (num == 2)
    {
        printf("two");
    }
    else if (num == 3)
    {
        printf("three");
    }
    else if (num == 4)
    {
        printf("four");
    }
    else if (num == 5)
    {
        printf("five");
    }
    else
    {
        printf("please enter 1 to 5");
    }
}
