//wap to print your friend name according to frist latter of name.
#include<stdio.h>
void main()
{
 char ch;
 printf("enter frist latter of name : ");
 scanf("%c",&ch);//l
 switch(ch)
 {
    case 'a': printf("anurag");break;
    case 'm':printf("mayur");break;
    case 'y':printf("yash");break;
    case 'p':printf("pankaj");break;
    case 'r':printf("rahul");break;
    default :printf("i do not have friend which name start with %c",ch);
 }
}