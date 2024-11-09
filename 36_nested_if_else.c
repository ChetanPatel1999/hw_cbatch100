// wap to check voter is eligible for casting vote india or not.
#include <stdio.h>
void main()
{
    char country;
    int age;
    printf("enter your country if indian so enter i otherwise other char : ");
    scanf("%c", &country);
    if (country == 'i')
    {
        printf("enter your age : ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("your are eligibale for casting vote ");
        }
        else
        {
            printf("you are not eligible for casting vote");
        }
    }
    else
    {
        printf("you are not indian");
    }
}