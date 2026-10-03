#include <stdio.h>

void arithmetic(int a, int b, int *sum, int *difference,
                int *product, float *quotient)
{
    *sum = a + b;
    *difference = a - b;
    *product = a * b;

    if (b != 0)
        *quotient = (float)a / b;
    else
        *quotient = 0;
}

int main()
{
    int a, b;
    int sum, difference, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    arithmetic(a, b, &sum, &difference, &product, &quotient);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (b != 0)
        printf("Quotient = %.2f\n", quotient);
    else
        printf("Quotient = Not possible (division by zero)\n");

    return 0;
}