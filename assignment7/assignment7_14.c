#include <stdio.h>

int main()
{
    int n, i, j;
    int mainSum = 0, secondarySum = 0;
    int upper = 1, lower = 1, diagonal = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix
    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate diagonal sums
    for (i = 0; i < n; i++)
    {
        mainSum = mainSum + matrix[i][i];
        secondarySum = secondarySum + matrix[i][n - 1 - i];
    }

    // Check triangular and diagonal properties
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // Upper triangular: elements below main diagonal must be 0
            if (i > j && matrix[i][j] != 0)
            {
                upper = 0;
            }

            // Lower triangular: elements above main diagonal must be 0
            if (i < j && matrix[i][j] != 0)
            {
                lower = 0;
            }

            // Diagonal: all non-diagonal elements must be 0
            if (i != j && matrix[i][j] != 0)
            {
                diagonal = 0;
            }
        }
    }

    // Display diagonal sums
    printf("\nSum of main diagonal = %d\n", mainSum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);

    // Display matrix type
    if (diagonal)
    {
        printf("The matrix is a diagonal matrix.\n");
    }
    else if (upper)
    {
        printf("The matrix is an upper triangular matrix.\n");
    }
    else if (lower)
    {
        printf("The matrix is a lower triangular matrix.\n");
    }
    else
    {
        printf("The matrix is none of these.\n");
    }

    return 0;
}