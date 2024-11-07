//wap to check given number in range (200 to 500) or not.
#include<stdio.h>
void main()
{
 int num;
 printf("enter a number : ");
 scanf("%d",&num);
 if(num>200 &&  num<500)
 {
    printf("num in range(200 to 500)");
 }
 else{
    printf("num not in range(200 to 500)");
 }
}