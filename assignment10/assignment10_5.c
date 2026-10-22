#include <stdio.h>

int binarySearch(int a[], int low, int high, int key);

int main() {

    int a[100], n, i, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter sorted elements: ");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(a, 0, n - 1, key);

    if (result == -1)
        printf("Element not found");
    else
        printf("Element found at position %d", result + 1);

    return 0;
}

int binarySearch(int a[], int low, int high, int key)
{
    int mid;

    if (low > high)
        return -1;

    mid = (low + high) / 2;

    if (a[mid] == key)
        return mid;

    if (key < a[mid])
        return binarySearch(a, low, mid - 1, key);

    return binarySearch(a, mid + 1, high, key);
}