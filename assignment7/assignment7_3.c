#include <stdio.h>

int main()
{
    int n, i, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new element: ");
    scanf("%d", &element);

    printf("Enter the position where you want to insert: ");
    scanf("%d", &position);

    // Check whether position is valid
    if (position < 1 || position > n + 1)
    {
        printf("Invalid position. Please enter a position between 1 and %d.\n", n + 1);
    }
    else
    {
        // Shift elements to the right
        for (i = n; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }

        // Insert the new element
        arr[position - 1] = element;

        n++;

        printf("Updated array:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }

    return 0;
}