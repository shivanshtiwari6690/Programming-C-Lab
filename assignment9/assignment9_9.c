#include <stdio.h>
#include <limits.h>

void analyzeArray(int *arr, int n, int *smallest,
                  int *secondSmallest, int *greatest,
                  int *secondGreatest, int *distinctCount)
{
    int i;

    *smallest = INT_MAX;
    *secondSmallest = INT_MAX;
    *greatest = INT_MIN;
    *secondGreatest = INT_MIN;
    *distinctCount = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] < *smallest)
        {
            *secondSmallest = *smallest;
            *smallest = arr[i];
        }
        else if (arr[i] > *smallest && arr[i] < *secondSmallest)
        {
            *secondSmallest = arr[i];
        }

        if (arr[i] > *greatest)
        {
            *secondGreatest = *greatest;
            *greatest = arr[i];
        }
        else if (arr[i] < *greatest && arr[i] > *secondGreatest)
        {
            *secondGreatest = arr[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        int j, found = 0;

        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
            (*distinctCount)++;
    }
}

int main()
{
    int arr[100];
    int n, i;
    int smallest, secondSmallest;
    int greatest, secondGreatest;
    int distinctCount;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    analyzeArray(arr, n, &smallest, &secondSmallest,
                 &greatest, &secondGreatest, &distinctCount);

    if (distinctCount < 2)
    {
        printf("Fewer than two distinct values exist.\n");
    }
    else
    {
        printf("Smallest = %d\n", smallest);
        printf("Second Smallest = %d\n", secondSmallest);
        printf("Greatest = %d\n", greatest);
        printf("Second Greatest = %d\n", secondGreatest);
    }

    return 0;
}