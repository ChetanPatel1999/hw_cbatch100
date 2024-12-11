// fputc() :- write single character
#include <stdio.h>
void main()
{
    FILE *ptr;
    char h='O';
    ptr = fopen("abc.txt", "a");
    fputc('A',ptr);
    fputc(h,ptr);
    fputc(97,ptr);
    fclose(ptr);
}