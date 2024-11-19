// break stmnt example
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)//5
    {
        if (i == 5)
        {
            break;
        }
        printf("%d ", i);
    }
    printf("after for loop");
}