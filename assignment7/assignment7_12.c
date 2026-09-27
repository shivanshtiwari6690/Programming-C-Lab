#include <stdio.h>

int main()
{
    int m, n, i, j;
    int sum;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int arr[m][n];

    // Input matrix
    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display matrix
    printf("\nMatrix:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Row-wise sums
    printf("\nRow-wise sums:\n");

    for (i = 0; i < m; i++)
    {
        sum = 0;

        for (j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    // Column-wise sums
    printf("\nColumn-wise sums:\n");

    for (j = 0; j < n; j++)
    {
        sum = 0;

        for (i = 0; i < m; i++)
        {
            sum = sum + arr[i][j];
        }

        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}