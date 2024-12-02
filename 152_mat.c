// wap to take 2 matrix element from user and display matrixs.
// also display summatrix of two  matrix.
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
void sum_mat(int r, int c, int mat1[r][c], int mat2[r][c], int summat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            summat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r);
    printf("enter column for matrix : ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], summat[r][c];
    inputmat(r, c, mat1);
    inputmat(r, c, mat2);
    display(r, c, mat1);
    display(r, c, mat2);
    sum_mat(r, c, mat1, mat2, summat);
    display(r, c, summat);
}