//union example in c lanaguge
#include <stdio.h>
#include <string.h>
union pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    union pen p1, p2, p3;
    printf("size of p1 : %d\n",sizeof(p1));
    p1.price = 5;
    p1.rating = 3.4;
    strcpy(p1.name, "cello");
    
    printf("pen info ....\n");
    printf("name of pen : %s\n", p1.name);
    printf("price of pen : %d\n", p1.price);
    printf("rating of pen : %.1f\n", p1.rating);
}