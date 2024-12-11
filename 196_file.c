// fscanf () :- read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[50];
    int i;
    ptr = fopen("factorial.txt", "r");
    while (1)
    {
        i=fscanf(ptr, "%s", ch);
        if(i==EOF)
        {
            break;
        }
        printf("%s ", ch);
    }
    fclose(ptr);
}