//wap to print 1 to 10 numbers.
#include<stdio.h>
void number()
{
  static int i=1;
  printf("%d ",i);
  i++;//11
  if(i<=10)
  {
    number();
  }
  
}
void main()
{
 number();
}