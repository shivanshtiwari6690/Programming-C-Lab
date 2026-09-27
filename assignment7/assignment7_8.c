#include <stdio.h>

int main()
{
    int n1, n2, i, j;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Third array for merged elements
    int merged[n1 + n2];

    // Copy first array
    for (i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (j = 0; j < n2; j++)
    {
        merged[n1 + j] = arr2[j];
    }

    // Display merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    printf("\n");

    return 0;
}