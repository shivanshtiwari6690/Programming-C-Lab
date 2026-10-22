#include <stdio.h>

void reverse(int a[], int l, int r);
int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverse(a, 0, n - 1);

    printf("Reversed array: ");

    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);

    return 0;
}

void reverse(int a[], int l, int r)
{
    int temp;

    if (l >= r)
        return;

    temp = a[l];
    a[l] = a[r];
    a[r] = temp;

    reverse(a, l + 1, r - 1);
}