#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    int largest, secondLargest;
    int smallest, secondSmallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("At least 2 elements are required.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = INT_MIN;
    smallest = secondSmallest = INT_MAX;

    for (i = 0; i < n; i++)
    {
        // Find largest and second largest
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }

        // Find smallest and second smallest
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    if (secondLargest == INT_MIN || secondSmallest == INT_MAX)
    {
        printf("Array must contain at least two distinct elements.\n");
    }
    else
    {
        printf("Largest element = %d\n", largest);
        printf("Second-largest element = %d\n", secondLargest);
        printf("Smallest element = %d\n", smallest);
        printf("Second-smallest element = %d\n", secondSmallest);
    }

    return 0;
}