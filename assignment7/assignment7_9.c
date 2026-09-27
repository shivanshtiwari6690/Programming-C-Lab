#include <stdio.h>

int main()
{
    int rows, columns, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter the elements:\n");

    // Input elements
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display matrix
    printf("\nThe matrix is:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}