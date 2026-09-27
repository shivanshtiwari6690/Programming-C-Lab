#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    int i, j;

    // Input dimensions
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check whether matrices have the same order
    if (r1 != r2 || c1 != c2)
    {
        printf("Matrix addition is not possible.\n");
        printf("Both matrices must have the same order.\n");

        return 0;
    }

    int A[r1][c1];
    int B[r2][c2];
    int sum[r1][c1];

    // Input first matrix
    printf("Enter elements of first matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Calculate sum
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("\nSum of the two matrices:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}