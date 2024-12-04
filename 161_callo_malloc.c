#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr,i;
    ptr = (int *)calloc(5,sizeof(int));
    for(i=0;i<5;i++)
    {
        printf("%d \n",*ptr);
        ptr++;
    }

}