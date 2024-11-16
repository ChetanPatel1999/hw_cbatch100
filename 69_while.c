// wap to check any digit in given number and also count digit.
#include <stdio.h>
void main()
{
    int num,d, c = 0, rem;
    printf("enter a number : ");
    scanf("%d", &num); //7537
    printf("enter single digit : ");
    scanf("%d", &d); // 7
    while (num)  
    {
        rem = num % 10;
        if(rem==d)
        {
          c++;//2
        }
        num = num / 10;
    }

    if(c==0)
    {
      printf("num is not found");
    }
    else{
      printf("%d is %d times find",d,c);
    }
}    
