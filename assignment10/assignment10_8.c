#include <stdio.h>

int multiply(int a[10][10], int b[10][10], int row, int col, int k, int n);

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
        r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
        return 0;

    if (c1 != r2)
    {
        printf("Multiplication not possible");
        return 0;
    }

    printf("Enter first matrix:\n");

    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");

    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            c[i][j] = multiply(a, b, i, j, 0, c1);

    printf("Product matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d\t", c[i][j]);

        printf("\n");
    }

    return 0;
}

int multiply(int a[10][10], int b[10][10], int row, int col, int k, int n)
{
    if (k == n)
        return 0;

    return a[row][k] * b[k][col] +
           multiply(a, b, row, col, k + 1, n);
}