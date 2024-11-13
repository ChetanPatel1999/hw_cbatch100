//wap to print cube 1 to n numbers.
#include<stdio.h>
void main()
{
 int i,n;
 printf("enter a num : ");
 scanf("%d",&n);//5
 for(i=1;i<=n;i++)//2
 {
    printf("cube of %d = %d \n",i,i*i*i);
 }
}