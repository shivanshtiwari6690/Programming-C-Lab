#include <stdio.h>

int main() {
    int n, i, search, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    printf("\n");

    // Search for the element
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element found at position %d\n", i + 1);
            count++;
        }
    }

    if (count == 0) {
        printf("Element not found in the array.\n");
    } else {
        printf("Total number of occurrences = %d\n", count);
    }

    return 0;
}