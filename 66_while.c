//wap to print digit count in given number.
#include<stdio.h>
void main()
{
 int num,c=0;
 printf("enter a number : ");
 scanf("%d",&num);//123
 while(num)
 {
    c++;
    num=num/10;
 }
 printf("total digit count : %d",c);
}
