// wap to check given number is find in table or not.
#include <stdio.h>
void main()
{
    int n, s, i,f=0;
    printf("enter table : ");
    scanf("%d", &n); // 6
    printf("enter number : ");
    scanf("%d", &s); // 6
    for (i = 1; i <= 10; i++)
    {
        if (s == n * i)
        {
          f=1;  
          break;
        }
    }
    if(f==1)
    {
       printf("number is found\n"); 
    }
    else{
        printf("number is not found\n");
    }
}