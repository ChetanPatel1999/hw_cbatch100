// no return type/ but with argument
#include <stdio.h>
void add(int num1, int num2)
{
    int sum;
    printf("value of num1 = %d\n", num1);
    printf("value of num2 = %d\n", num2);
    sum = num1 + num2;
    printf("sum of %d and %d = %d\n", num1, num2, sum);
    printf("%d + %d = %d\n", num1, num2, sum);
}
void cube(int num)
{
    int c;
    c = num * num * num;
    printf("cube of %d = %d\n", num, c);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 3
    {
        cube(i);
    }
}
void upper(char ch) // ch='l';
{
    ch = ch - 32; // 65
    printf("upper case : %c\n", ch);
}
void vovel_cons(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("vovel\n");
    }
    else
    {
        printf("consonent\n");
    }
}
void factorial(int num)
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d", num, fact);
}
void main()
{
    // int x=4,y=9;
    // add(12,7);
    // add(x,y);
    cube(4);
    range(1, 5);
    range(3, 9);
    upper('a');
    upper('b');
    upper('l');
    vovel_cons('k');
    factorial(4);
}