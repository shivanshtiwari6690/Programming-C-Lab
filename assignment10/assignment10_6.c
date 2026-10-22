#include <stdio.h>

int maximum(int a[], int n);
int count(int a[], int n, int max);

int main()
{
    int a[100], n, i, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = maximum(a, n);

    printf("Maximum element = %d\n", max);
    printf("Occurrences = %d", count(a, n, max));

    return 0;
}

int maximum(int a[], int n)
{
    int m;

    if (n == 1)
        return a[0];

    m = maximum(a, n - 1);

    if (a[n - 1] > m)
        return a[n - 1];

    return m;
}

int count(int a[], int n, int max)
{
    if (n == 0)
        return 0;

    if (a[n - 1] == max)
        return 1 + count(a, n - 1, max);

    return count(a, n - 1, max);
}