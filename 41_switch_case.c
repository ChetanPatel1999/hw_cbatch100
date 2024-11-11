// wap to make a calculater mini project
#include <stdio.h>
void main()
{
    int num, a, b, ans;
    printf("welcome to my calculater : \n");
    printf("press 1 for add : \n");
    printf("press 2 for sub : \n");
    printf("press 3 for mul : \n");
    printf("press 4 for div : \n");
    printf("press any number  : ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("ook.. you want to addition :\n");
        printf("enter frist number : ");
        scanf("%d", &a);
        printf("enter second number : ");
        scanf("%d", &b);
        ans = a + b;
        printf("%d + %d = %d\n", a, b, ans);
        break;
    case 2:
        printf("ook.. you want to subtraction :\n");
        printf("enter frist number : ");
        scanf("%d", &a);
        printf("enter second number : ");
        scanf("%d", &b);
        ans = a - b;
        printf("%d - %d = %d\n", a, b, ans);
        break;
    case 3:
        printf("ook.. you want to multiplication :\n");
        printf("enter frist number : ");
        scanf("%d", &a);
        printf("enter second number : ");
        scanf("%d", &b);
        ans = a * b;
        printf("%d * %d = %d\n", a, b, ans);
        break;
    case 4:
        printf("ook.. you want to division :\n");
        printf("enter frist number : ");
        scanf("%d", &a);
        printf("enter second number : ");
        scanf("%d", &b);
        ans = a / b;
        printf("%d / %d = %d\n", a, b, ans);
        break;

    default:
        printf("please enter 1 to 4");
        break;
    }
    printf("thanks for uisng my calculater");
}