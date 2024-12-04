//dyanamic memory allocation using calloc fuction
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr,*temp, i,n;
    printf("enter size of dynamic array :");
    scanf("%d",&n);//10
    ptr=(int*)calloc(n,sizeof(int));//400
    temp=ptr;//400
    printf("enter dynamic array element :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr = temp; //400
    printf("dyanamic array element are : \n");
    for (i = 0; i < n; i++) // 2
    {
        printf("%d \n", *ptr);
        ptr++; // 420
    }
    ptr=temp;
    free(ptr);   
}