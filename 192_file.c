// fprintf():- write data into file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[]="who are you\n";
    ptr = fopen("C:\\Users\\WIN\\Documents\\demo\\hi.txt", "w");
    fprintf(ptr,"hi i am chetan patel\n");
    fprintf(ptr,ch);
    fclose(ptr);
}