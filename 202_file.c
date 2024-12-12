// fgets() // read data from file
#include <stdio.h>
void main()
{
    FILE *ptr=NULL;
    char *c;
    char ch[50];
    ptr = fopen("factorial.txt", "r");
    while (1)
    {
        c=fgets(ch, 50, ptr);
        if (c == NULL)
        {
            break;
        }
        printf("%s", ch);
    }
    fclose(ptr);
}