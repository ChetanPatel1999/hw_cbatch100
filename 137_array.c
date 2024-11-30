//wap to print table of 1 to 10.
#include<stdio.h>
void main()
{
 int i,j;
 for(i=1;i<=10;i++)//3
 {
    printf("table of %d : \n",i);
    for(j=1;j<=10;j++)
    {
     printf("%d * %d = %d \n",i,j,i*j);
    }
 }
}