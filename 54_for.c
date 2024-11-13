//wap to print sum of all element from 1 to n or print avrage.
#include<stdio.h>
void main()
{
  int i,n,sum=0;
  float ave;
  printf("enter a num :");
  scanf("%d",&n);//10
  for(i=1;i<=n;i++)//11
  {
    sum = sum + i; //sum = 28
  }
  ave=sum/(float)n;
  printf("sum of 1 to %d = %d\n",n,sum);
  printf("avrage of 1 to %d = %.2f",n,ave);
}