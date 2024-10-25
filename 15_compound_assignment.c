// example of compound assignment operator
#include <stdio.h>
void main()
{
    int a = 12, b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // a*=b;   //a=a*b
    // a-=b;   // a=a-b
    // b+=a;   // b=b+a
    // b *= b; // b=b*b
    a%=b;
    printf("after using compond assignment....\n");
    printf("a = %d\n", a); // 12
    printf("b = %d\n", b); // 25
}