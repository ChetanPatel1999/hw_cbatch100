// rewind() :- its set pointer in the begning of file.
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("205_file.c", "r");
    while (1)
    {
        ch = fgetc(ptr);
        if(ch==EOF)
        {
            break;
        }
        printf("%c", ch);
    }
   rewind(ptr);
   //fseek(ptr,0,SEEK_SET);
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