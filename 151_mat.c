// wap to take matrix element from user and display matrix.
// and display max element form matrix.
#include <stdio.h>
void inputmat(int r, int c, int mat[r][c])
{
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
}
void display(int r, int c, int mat[r][c])
{
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int max_ele(int r, int c, int mat[r][c])
{
    int i, j, max = mat[0][0];
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            if (max < mat[i][j])
            {
                max = mat[i][j];
            }
        }
    }
    return max;
}
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r);
    printf("enter column for matrix : ");
    scanf("%d", &c);
    int mat[r][c];
    inputmat(r, c, mat);
    display(r, c, mat);
    printf("matrix max element : %d", max_ele(r, c, mat));
}