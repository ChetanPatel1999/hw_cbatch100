// clube entry and show menu and take order mini project
#include <stdio.h>
void main()
{
    int age, num, total = 0, i, q1 = 0, q2 = 0, q3 = 0;
    printf("enter your age : ");
    scanf("%d", &age); // 67
    if (age >= 18)
    {
        printf("welcome to my clube : \n");
        do
        {
            printf("clube menu : \n");
            printf("1. pasta : 120 \n");
            printf("2. noodles : 80\n");
            printf("3. sandwitch : 150\n");
            printf("plesea press any number for order : ");
            scanf("%d", &num); // 1
            switch (num)
            {
            case 1:
                printf("number of quantity : ");
                scanf("%d", &num); // 3
                for (i = 1; i <= num; i++)
                {
                    q1++;
                    total = total + 120;
                }
                printf("your pasta is order %d times", q1);
                break;
            case 2:
                printf("your noodles is ordered ");
                total = total + 80;
                q2++;
                break;
            case 3:
                printf("your sandwith is ordered ");
                total = total + 150;
                q3++;
                break;
            default:
                printf("please enter 1,2 or 3");
            }
            printf("\nyou want to order more press 1  :");
            scanf("%d", &num);
        } while (num == 1);
        printf("yore bill sir :\n");
        printf("item         price      quantity       total\n");
        printf("pasta        120          %d            %d\n",q1,120*q1);
        printf("noodles      80           %d            %d\n",q2,80*q2);
        printf("sandwitch    150          %d            %d\n",q3,150*q3);
        printf("____________________________________________________________\n");
        printf("your total bill : %d\n", total);
        printf("thanks for coming and visit again");
    }
    else
    {
        printf("you are not adult please try after %d year ", 18 - age);
    }
}