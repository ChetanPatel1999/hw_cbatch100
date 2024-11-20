// wap to ditribute employ sallary and exit from programm if amount is finished or no one employ is left to given sallary.
#include <stdio.h>
void main()
{
    int totalammount = 5000;
    int sallary, distribute_sallary_sum = 0, n;
    do
    {
        printf("how much you sallary :");
        scanf("%d", &sallary);
        distribute_sallary_sum = distribute_sallary_sum + sallary;// 5500
        if (totalammount < distribute_sallary_sum)
        {
            distribute_sallary_sum = distribute_sallary_sum - sallary;
            printf("sorry we cant pay you come next time \n");
            break;
        }
        printf("more employ is available press 1 : ");
        scanf("%d", &n);
    } while (n == 1);
    printf("total sallary distribute today : %d", distribute_sallary_sum);
}
