// with return type , with argument
#include<stdio.h>
int cube(int num)
{
    int c;
    c=num*num*num;
    return c;
}
void range(int s, int e)//s=1 , e=5
{
    int i;
    for(i=s;i<=e;i++)
    {
        printf("cube of %d = %d\n",i,cube(i));
    }
}
void main()
{
  range(1,5);
  printf("cube = %d\n",cube(10));
}