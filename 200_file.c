//fgets() // read data from file
//fputs() // write data into file
#include<stdio.h>
void main()
{
 FILE *ptr;
 char ch[]="inside variable";
 ptr=fopen("abc.txt","w");
 fputs("we written this sentance using fgets\n",ptr);
 fputs(ch,ptr);
 fclose(ptr);
}