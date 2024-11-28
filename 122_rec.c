// Example of recursion
//wap to print a msg 5 times using recursion.
#include <stdio.h>
void fun()
{
    static int i=1; //its run in prgramm once time
    printf("hello students...\n");//5
    i++;//6
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}