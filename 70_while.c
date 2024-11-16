//wap to take a number from user and display in reverse.
#include<stdio.h>
void main()
{
 int num,rev=0,rem;
 printf("enter a number : ");
 scanf("%d",&num);//567
 while(num)//0
 {
    rem=num%10;//5
    rev=rev*10 +rem; // rev = 765
    num=num/10;
 }
 printf("revrese number  : %d",rev);
}
