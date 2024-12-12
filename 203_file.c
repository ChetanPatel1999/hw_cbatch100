//make multiple file 
#include <stdio.h>
void main()
{
    int i;
    char file[100];
    for (i = 1; i <= 5; i++)
    {
        sprintf(file,"C:\\Users\\WIN\\Documents\\demo\\abc%d.txt",i);
        fopen(file, "w" );
    }
}