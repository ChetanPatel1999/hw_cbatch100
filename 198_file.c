// fgetc() :- read single character
// fputc() :- write single character
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("198_file.c", "r");
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