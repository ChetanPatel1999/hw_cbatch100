// with return type , with argument
#include <stdio.h>
int add1(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
float add2(float a, float b)
{
    float c;
    c = a + b;
    return c;
}
void main()
{
    int res;
    res = add1(12, 7);
    printf("sum = %d\n", res);
    printf("sum = %d\n",add1(6,4));
    printf("sum = %.1f\n",add2(6.2,4.2));
}