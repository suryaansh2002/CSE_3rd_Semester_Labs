#include <stdio.h>
#include <stdlib.h>

void read(int **m, int r, int c)
{
    int i, j;
    printf("\n");
    for (i = 0; i < r; i++)
    {
        printf("Enter elements for row %d : ", i + 1);
        fflush(stdin);
        for (j = 0; j < c; j++)
        {
            scanf("%d", (*(m + i) + j));
        }
    }
}

void disp(int **m, int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%3d", *(*(m + i) + j));
        }
        printf("\n");
    }
    printf("\n");
}
void multiply(int **m1, int **m2, int r, int c)
{
    int **p = (int **)calloc(r + 1, sizeof(int *));
    int i, j, k;
    for (i = 0; i < r; i++)
    {
        p[i] = (int *)calloc(c, sizeof(int));
    }
    p[i] = NULL;
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < r; k++)
            {
                sum += (m1[i][k] * m2[k][j]);
            }
            p[i][j] = sum;
            sum = 0;
        }
    }
    printf("\nMatrix after muplication : \n");
    disp(p, r, c);
}
int main()
{
    int **mat1, **mat2;
    int r, c, i;
    printf("Enter number of rows and colums : ");
    scanf("%d %d", &r, &c);
    mat1 = (int **)calloc(r + 1, sizeof(int *));
    mat2 = (int **)calloc(r + 1, sizeof(int *));
    for (i = 0; i < r; i++)
    {
        mat1[i] = (int *)calloc(c, sizeof(int));
        mat2[i] = (int *)calloc(c, sizeof(int));
    }
    mat1[i] = NULL;
    mat2[i] = NULL;
    printf("\nEnter elements of first matrix : ");
    read(mat1, r, c);
    printf("\nEnter elements of second matrix : ");
    read(mat2, r, c);
    disp(mat1, r, c);
    disp(mat2, r, c);
    multiply(mat1, mat2, r, c);
    return 0;
}