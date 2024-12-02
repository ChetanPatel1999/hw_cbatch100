// 2D array example
#include <stdio.h>
void main()
{
    //      r  c
    int mat[3][3] = {
        {12, 34, 56},
        {11, 22, 33},
        {12, 13, 14}};
    int i, j;
    printf("matrix element are : \n");
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}