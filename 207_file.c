// make a folder using c program
#include <stdio.h>
void main()
{
    int i;
    char folder[100];
    for (i = 1; i <= 5; i++)
    {
        sprintf(folder,"C:\\Users\\WIN\\Documents\\demo\\ram%d",i);
        mkdir(folder);
    }
}