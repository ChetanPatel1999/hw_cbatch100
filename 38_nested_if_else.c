// clube entry and show menu and take order mini project
#include <stdio.h>
void main()
{
    int age, num;
    printf("enter your age : ");
    scanf("%d", &age); // 12
    if (age >= 18)
    {
        printf("welcome to my clube : \n");
        printf("clube menu : \n");
        printf("1. pasta : 120 \n");
        printf("2. noodles : 80\n");
        printf("3. sandwitch : 150\n");
        printf("plesea press any number for order : ");
        scanf("%d", &num);//1
        switch(num)
        {
          case 1: printf("your pasta is ordered please pay 120 rs");break;
          case 2:  printf("your noodles is ordered please pay 80 rs"); break;
          case 3:  printf("your sandwith is ordered please pay 150 rs");break;
          default :printf("please enter 1,2 or 3");
        }
        
    }
    else
    {
        printf("you are not adult please try after %d year ", 18 - age);
    }
}