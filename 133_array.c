#include<stdio.h>
void main()
{
 int a[5],i;
 printf("enter array element : \n");
 for(i=0;i<5;i++)//1
 {
  scanf("%d",&a[i]);
 }
 printf("array element are : ");
 for(i=0;i<5;i++)
 {
    printf("%d ",a[i]);
 }
}