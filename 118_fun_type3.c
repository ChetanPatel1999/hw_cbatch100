// with return type , with argument
#include <stdio.h>
float avrage(int a, int b)
{
    float av;
    av = (a + b) / 2.0;
    return av;
}
int factorial(int num) // 5 1*2*3*4*5 = 120
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void main()
{
    printf("avrage of 10 and 11 = %.1f\n", avrage(10, 11));
    printf("avrage of 10 and 10 = %.1f\n", avrage(10, 10));
    printf("avrage of 25 and 30= %.1f\n", avrage(25, 30));
    printf("factorial of 5 = %d \n",factorial(5));
    int res=factorial(4);
    printf("factorial of 4 = %d",res);

}