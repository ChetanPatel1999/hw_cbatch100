//wap to print sum of individul even digit of in given number.
//123 = 6
//67 = 13
//6547 = 22
#include<stdio.h>
void main()
{
 int num,sum=0,rem;
 printf("enter a number : ");
 scanf("%d",&num);//123
 while(num)//0
 {
    rem=num%10;
    if(rem%2==0)
    {
        sum=sum+rem;// sum = 9
    }
    num=num/10;
 }
 printf("sum of even individul digit : %d",sum);
}
