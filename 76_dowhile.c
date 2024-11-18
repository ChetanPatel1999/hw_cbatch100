//wap to print sum of numbers which given by user till user want.
#include<stdio.h>
void main()
{
 int sum=0,marks,n;
 do
 {
  printf("enter mark : ");
  scanf("%d",&marks);//80
  sum=sum+marks; //sum =170
  printf("you want to add more marks press 1 : ");
  scanf("%d",&n);
 }
 while(n==1);
 printf("total marks : %d",sum);
}