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
    struct pen p1, p2, p3;

    printf("enter pen info : \n");
    printf("enter pen name :");
    scanf("%s", p1.name);
    printf("enter pen price :");
    scanf("%d",&p1.price);
    printf("enter pen rating :");
    scanf("%f",&p1.rating);

    printf("enter pen info : \n");
    printf("enter pen name :");
    scanf("%s", p2.name);
    printf("enter pen price :");
    scanf("%d",&p2.price);
    printf("enter pen rating :");
    scanf("%f",&p2.rating);

    printf("pen info ....\n");
    printf("name of pen : %s\n", p1.name);
    printf("price of pen : %d\n", p1.price);
    printf("rating of pen : %.1f\n", p1.rating);


    printf("\npen info ....\n");
    printf("name of pen : %s\n", p2.name);
    printf("price of pen : %d\n", p2.price);
    printf("rating of pen : %.1f\n", p2.rating);
}