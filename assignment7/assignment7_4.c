#include <stdio.h>

int main()
{
    int n, i, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete: ");
    scanf("%d", &position);

    // Check whether position is valid
    if (position < 1 || position > n)
    {
        printf("Invalid position. Please enter a position between 1 and %d.\n", n);
    }
    else
    {
        // Shift elements to the left
        for (i = position - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Updated array:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }

    return 0;
}