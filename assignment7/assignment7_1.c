#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    // Input elements and calculate sum
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Display array elements
    printf("Array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Calculate average
    average = (float)sum / n;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f\n", average);

    return 0;
}