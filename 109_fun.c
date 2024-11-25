// function example in c lanaguge
#include <stdio.h>
void add(); // function declaration
void sub();
void main()
{
    printf("start main function..\n");
    add(); //function calling
    printf("end main fuction\n");
    sub();

}
void add() // fuction defination
{
    int num1, num2, sum;
    printf("Addition programm .....\n");
    printf("___________________________\n");
    printf("enter frist value : ");
    scanf("%d", &num1);
    printf("enter second value : ");
    scanf("%d", &num2);
    printf("value of num1 = %d\n", num1);
    printf("value of num2 = %d\n", num2);
    sum = num1 + num2;
    printf("sum of %d and %d = %d\n", num1, num2, sum);
    printf("%d + %d = %d\n", num1, num2, sum);
}
void sub() // fuction defination
{
    int num1, num2, sum;
    printf("subtraction programm .....\n");
    printf("___________________________\n");
    printf("enter frist value : ");
    scanf("%d", &num1);
    printf("enter second value : ");
    scanf("%d", &num2);
    printf("value of num1 = %d\n", num1);
    printf("value of num2 = %d\n", num2);
    sum = num1 - num2;
    printf("sub of %d and %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, sum);
}