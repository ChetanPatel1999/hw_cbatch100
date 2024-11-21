//wap to print 1 to 10 numner using goto stmnt.
#include<stdio.h>
void main()
{
 int i;
 i=1;
 lable:
 printf("%d \n",i);
 i++;
 if(i<=10)
 {
    goto lable;
 }
}