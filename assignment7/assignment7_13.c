#include <stdio.h>

int main()
{
    int n, i, j;
    int symmetric = 1;
    int skew_symmetric = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int transpose[n][n];

    // Input matrix
    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Check symmetric and skew-symmetric
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // Symmetric: A = A^T
            if (matrix[i][j] != transpose[i][j])
            {
                symmetric = 0;
            }

            // Skew-symmetric: A = -A^T
            if (matrix[i][j] != -transpose[i][j])
            {
                skew_symmetric = 0;
            }
        }
    }

    // Display transpose
    printf("\nTranspose of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

    // Display result
    if (symmetric)
    {
        printf("\nThe matrix is symmetric.\n");
    }
    else if (skew_symmetric)
    {
        printf("\nThe matrix is skew-symmetric.\n");
    }
    else
    {
        printf("\nThe matrix is neither symmetric nor skew-symmetric.\n");
    }

    return 0;
}