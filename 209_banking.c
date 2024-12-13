#include <stdio.h>
#include <stdlib.h>
int totalbelence=0;
char bank[30]="SBI Banke Of India";
struct account
{
    char name[30];
    char ac_no[20];
    int belance;
} typedef ac;
void create_account(ac a[], int index)
{
    if (index < 10)
    {
        printf("\nwelcome to account create page ....\n\n");
        printf("enter your name : ");
        getchar();
        gets(a[index].name);
        printf("enter account number :");
        scanf("%s", a[index].ac_no);
        printf("enter initial belence : ");
        scanf("%d", &a[index].belance);
        totalbelence=totalbelence+a[index].belance;
        printf("\naccount create successfully\n\n");
    }
    else
    {
        printf("\naccount create limit is full\n\n");
    }
}
void display_accounts(ac a[], int index)
{
   if(index>0)
   {
      int i;
      for(i=0;i<index;i++)
      {
        printf("\n%d account info : \n",i+1);
        printf("name of customer : %s\n",a[i].name);
        printf("ac_no of customer : %s\n",a[i].ac_no);
        printf("belance of customer : %d\n",a[i].belance);
        printf("____________________________________________\n\n");
      }
   }
   else{
    printf("\nno one account is created\n\n");
   }
}
void display_account()
{
    printf("account is diplsay\n");
}
void debit()
{
    printf("ammount is debited\n");
}
void credit()
{
    printf("ammount is credited\n");
}
void total_belence()
{
    printf("total belence of bank\n");
}
void main()
{
    ac a[10];
    int index = 0;
    int num;
    while (1)
    {
        printf("banking app...........\n");
        printf("press 1 for create account\n");
        printf("press 2 for display accounts\n");
        printf("press 3 for display individul accounts\n");
        printf("press 4 for debit ammount\n");
        printf("press 5 for credit ammount\n");
        printf("press 6 for display total belence of bank\n");
        printf("press 7 for exit from app\n");
        printf("choose opetion :");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            create_account(a, index);
            index++; // 1
            break;
        case 2:
            display_accounts(a,index);
            break;
        case 3:
            display_account();
            break;
        case 4:
            debit();
            break;
        case 5:
            credit();
            break;
        case 6:
            total_belence();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("please choose write option\n");
        }
    }
}