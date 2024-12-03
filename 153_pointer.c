//example of pointer
#include<stdio.h>
void main()
{
  int a=56,*ptr;
  ptr=&a;
  printf("value of a : %d\n",a);//12
  printf("address of a : %d\n",&a);//6487580
  printf("address of a by ptr : %d\n",ptr);//6487580
  printf("address of ptr : %d\n",&ptr);//445566
  printf("value of a by ptr : %d\n",*ptr);//12
}