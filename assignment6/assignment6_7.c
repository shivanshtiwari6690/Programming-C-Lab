#include <stdio.h>

int main()
{
    int n, binary = 0, place = 1;
    int remainder;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary = 0\n");
        return 0;
    }

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary = %d\n", binary);

    return 0;
}