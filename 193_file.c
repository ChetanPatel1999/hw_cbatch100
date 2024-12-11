// fprintf():- write data into file
// "a" : append mode use
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[]="who are you\n";
    ptr = fopen("C:\\Users\\WIN\\Documents\\demo\\hi.txt", "a");
    fprintf(ptr,"hi i am chetan patel\n");
    fprintf(ptr,ch);
    fclose(ptr);
}