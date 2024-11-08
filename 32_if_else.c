// wap to find greatest number btween three number.
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter frist number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);
    printf("enter third number : ");
    scanf("%d", &num3);
    // 600 566 78
    if (num1>num2 && num1>num3)
    {
        printf("gratest num : %d",num1);
    }
    else if(num2>num3)
    {
        printf("gratest num : %d",num2);
    }
    else{
        printf("gratest num : %d",num3);
    }
}