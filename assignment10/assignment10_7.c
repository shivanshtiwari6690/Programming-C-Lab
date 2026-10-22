#include <stdio.h>

int symmetric(int a[10][10], int n, int i, int j);

int main()
{
    int a[10][10], n, i, j;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
        return 0;

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    if (symmetric(a, n, 0, 0))
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}

int symmetric(int a[10][10], int n, int i, int j)
{
    if (i == n)
        return 1;

    if (j == n)
        return symmetric(a, n, i + 1, 0);

    if (a[i][j] != a[j][i])
        return 0;

    return symmetric(a, n, i, j + 1);
}