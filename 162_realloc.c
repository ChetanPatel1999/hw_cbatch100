#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    ptr = (int *)malloc(5 * sizeof(int));
    temp = ptr;
    printf("dyanamic memory adress : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    ptr = realloc(ptr, 8 * sizeof(int));
    printf("\nincrease dyanamic memory adresses : \n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
}