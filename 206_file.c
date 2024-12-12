// ftell() :- its reteurn index of current position of pointer.
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("abc.txt", "r");
    printf("position of pointer : %d\n", ftell(ptr));
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    printf("\nposition of pointer : %d", ftell(ptr));
    rewind(ptr);
    printf("\nposition of pointer : %d", ftell(ptr));
    fseek(ptr, 9,SEEK_SET);
    printf("\nposition of pointer : %d\n", ftell(ptr));
    fclose(ptr);
}