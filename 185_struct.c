// structure in c lanaguge
#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12]; // data memeber
    int price;
    float rating;
};
void main()
{
    struct pen p1, p2, p3;
    printf("size of p1 : %d\n",sizeof(p1));
    strcpy(p1.name, "cello");
    p1.price = 5;
    p1.rating = 3.4;
    
    strcpy(p2.name, "goldex");
    p2.price = 10;
    p2.rating = 4.5;
    printf("pen info ....\n");
    printf("name of pen : %s\n", p1.name);
    printf("price of pen : %d\n", p1.price);
    printf("rating of pen : %.1f\n", p1.rating);
    printf("\npen info ....\n");
    printf("name of pen : %s\n", p2.name);
    printf("price of pen : %d\n", p2.price);
    printf("rating of pen : %.1f\n", p2.rating);
}