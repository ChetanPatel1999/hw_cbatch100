// wap to print a msg 5 times using recursion.
#include <stdio.h>
void main()
{
    static int i = 1;
    printf("hello students\n");
    i++;
    if (i <= 5)
    {
        main();
    }
}