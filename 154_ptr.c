//we can change any variable value by pointer.
#include<stdio.h>
void main()
{
 int a=12;
 int *ptr;
 ptr=&a;
 printf("value of a : %d\n",a);
 *ptr=90;
 printf("value of a : %d\n",a);
}