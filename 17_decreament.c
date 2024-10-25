#include<stdio.h>
void main()
{
 int a=12;
 printf("a = %d \n",a);//12
 a--;
 printf("a = %d \n",a);//11
 --a;
 printf("a = %d \n",a);//10
 a=a-1;
 printf("a = %d \n",a);//9
 a-=1;
 printf("a = %d \n",a);//8
}