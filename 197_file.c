// fgetc() :- read single character
// fputc() :- write single character
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("factorial.txt", "r");
    ch = fgetc(ptr);
    printf("%c",ch);
    ch = fgetc(ptr);
    printf("%c",ch);
    fclose(ptr);
}