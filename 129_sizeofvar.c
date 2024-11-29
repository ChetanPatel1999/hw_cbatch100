#include<stdio.h>
void main()
{
 int a=12;
 char ch;
 float b;
 long long int h;
 printf("size of int : %d\n",sizeof(a));
 printf("size of char : %d\n",sizeof(ch));
 printf("size of float : %d\n",sizeof(b));
 printf("size of long long int : %d\n",sizeof(h));
 printf("adress of a : %d",&a);
}