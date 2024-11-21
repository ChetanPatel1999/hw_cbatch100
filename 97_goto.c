//example of goto
#include<stdio.h>
void main()
{
 int i;
 i=1;
 printf("hi student\n");
 i++;
 if(i<=5)
 {
    goto lable;
 }
 printf("some stmnt\n");
 lable:
 printf("after lable");
}