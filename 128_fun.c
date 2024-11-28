#include <stdio.h>
int gretast(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int even_odd(int num) // 12
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int sum_number(int s,int e)//s=10, e=20
{
    int sum=0,i;
    for(i=s;i<=e;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void main()
{
    printf("greates num : %d\n", gretast(123, 67));
    printf("greates num : %d\n", gretast(123, 667));
    printf("sum 1 to 10 : %d\n",sum_number(1,10));
    printf("sum 10 to 15: %d\n",sum_number(10,15));
    if (even_odd(12))
    {
        printf("even numner\n");
    }
    else
    {
        printf("odd number\n");
    }
}