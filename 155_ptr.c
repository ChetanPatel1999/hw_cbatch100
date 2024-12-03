//when we increase pointer by 1 so its value incrase by 4 if pointer type is int.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("address of a : %d\n", &a);         // 6487580
    printf("address of a by ptr : %d\n", ptr); // 6487580
    ptr++;
    printf("value of ptr :%d \n",ptr);
    ptr=ptr+1;
    printf("value of ptr :%d \n",ptr);
}