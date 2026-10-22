#include <stdio.h>

int columnSum(int a[10][10], int rows, int col, int i);
int minimumColumn(int a[10][10], int rows, int cols, int col, int minCol, int minSum);

int main()
{
    int a[10][10], rows, cols, i, j;
    int minCol, minSum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
        return 0;

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    minSum = columnSum(a, rows, 0, 0);
    minCol = minimumColumn(a, rows, cols, 1, 0, minSum);

    printf("Column with minimum sum = %d\n", minCol + 1);
    printf("Minimum sum = %d", columnSum(a, rows, minCol, 0));

    return 0;
}

int columnSum(int a[10][10], int rows, int col, int i)
{
    if (i == rows)
        return 0;

    return a[i][col] + columnSum(a, rows, col, i + 1);
}

int minimumColumn(int a[10][10], int rows, int cols, int col, int minCol, int minSum)
{
    int sum;

    if (col == cols)
        return minCol;

    sum = columnSum(a, rows, col, 0);

    if (sum < minSum)
    {
        minSum = sum;
        minCol = col;
    }

    return minimumColumn(a, rows, cols, col + 1, minCol, minSum);
}
