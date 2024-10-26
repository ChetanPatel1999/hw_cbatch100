// wap to print greatest number between two number.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter frist num : ");
    scanf("%d", &num1);//344
    printf("enter second num : ");
    scanf("%d", &num2);//78
    num1 > num2 ? printf("greatest num : %d",num1) : printf("greatest num : %d",num2);
}