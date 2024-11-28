// wap to even numbers.
#include <stdio.h>
void evennumber()
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d ", i);
    }
    i++;
    if (i <= 20)
    {
        evennumber();
    }
}
void oddnumber()
{
    static int i = 1;
    if (i % 2 == 1)
    {
        printf("%d ", i);
    }
    i++;
    if (i <= 20)
    {
        oddnumber();
    }
}
void main()
{
    printf("even number : ");
    evennumber();
    printf("\n");
    printf("odd number : ");
    oddnumber();
}