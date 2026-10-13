#include <stdio.h>

void rev(int arr[], int l, int r);
int main() {
    int a[10], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    rev(a, 0, n - 1);
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}
void rev(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    rev(arr, l + 1, r - 1);
}