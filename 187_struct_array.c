// structure in c lanaguge
#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    struct pen p[3];
    int i;
    for (i = 0; i < 3; i++) // 1
    {
        printf("enter pen info : \n");
        printf("enter pen name :");
        scanf("%s", p[i].name);
        printf("enter pen price :");
        scanf("%d", &p[i].price);
        printf("enter pen rating :");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 3; i++)//2
    {
        printf("\npen info ....\n");
        printf("name of pen : %s\n", p[i].name);
        printf("price of pen : %d\n", p[i].price);
        printf("rating of pen : %.1f\n", p[i].rating);
    }
}