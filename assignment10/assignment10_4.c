#include <stdio.h>
#include <limits.h>

void secondlargest(int arr[], int n, int i, int *l, int *sl, int *found);

int main()
{
    int arr[100], n, i;
    int l = INT_MIN, sl = INT_MIN, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter the elements of the array: ");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    secondlargest(arr, n, 0, &l, &sl, &found);

    if (found)
        printf("Second-largest distinct element = %d\n", sl);
    else
        printf("Fewer than two distinct elements exist.\n");

    return 0;
}
void secondlargest(int arr[], int n, int i, int *l, int *sl, int *found)
{
    if (i == n)
        return;

    if (arr[i] > *l)
    {
        *sl = *l;
        *l = arr[i];
        *found = 1;
    }
    else if (arr[i] < *l &&
             (!*found || arr[i] > *sl))
    {
        *sl = arr[i];
        *found = 1;
    }

    secondlargest(arr, n, i + 1, l, sl, found);
}