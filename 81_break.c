// break stmnt example
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 5
    {
        printf("%d ", i);
        break;
    }
    printf("after for loop");
}