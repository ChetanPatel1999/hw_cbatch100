//constant type variable...
//wap to calculate area of circle.
#include<stdio.h>
void main()
{
  float radius,area;
  const float pi=3.141;
  printf("enter radius : ");
  scanf("%f",&radius);//5
  area=pi*radius*radius;
  printf("radius of circle = %.2f\n",radius);
  printf("area of circle = %.2f",area);
  
}
