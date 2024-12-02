// wap to take matrix element from user and display matrix.
// and display sum of all matrix element and also matrix avrage.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r);
    printf("enter column for matrix : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("enter matrix element pos[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("matrix element are : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // code for sum of all matrix element
    float sum=0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + mat[i][j];
        }
    }
    printf("sum of all matrix element is : %.0f\n",sum);
    float ave;
    ave=sum/(r*c);
    printf("avrge of matrix : %.2f",ave);

}