// fseek() :- its set pointer in file specific position
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("204_file.c", "r");
    fseek(ptr,10,SEEK_SET);
    while (1)
    {
        ch = fgetc(ptr);
        if(ch==EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);
}