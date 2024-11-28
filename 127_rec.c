//wap to print factorial of given number using recursion.
#include<stdio.h>
int factorial(int num)//5
{
   static int i=1,fact=1;
   fact=fact*i;//120
   i++;//6
   if(i<=num)
   {
    factorial(num);
   }
   return fact;
}
void main()
{
 printf("factorila = %d",factorial(4));
}