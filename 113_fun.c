#include<stdio.h>
void fun2();
void fun3();
void fun1()
{
    printf("hi i am fun1\n");
    fun2();

}
void fun2()
{
    fun3();
    printf("hi i am fun2\n");
}
void fun3()
{
    printf("hi i am fun3\n");
}
void main()
{
 printf("hi i am main\n");
 fun1();
 printf("end main fuction\n");
}