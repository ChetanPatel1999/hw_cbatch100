// fprintf():- write data into file
// "a" : append mode use
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("factorial.txt", "a");
    int num,fact=1,i;
    printf("enter a num : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    fprintf(ptr,"factorial of %d = %d\n",num,fact);
    fclose(ptr);
}