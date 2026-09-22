#include <stdio.h>

int main()
{
    int x, n;
    int i, j;
    long long power, factorial;
    double term, sum = 0;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        power = 1;
        factorial = 1;

        /* Calculate x^i */
        for (j = 1; j <= i; j++)
        {
            power = power * x;
        }

        /* Calculate i! */
        for (j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }

        term = (double)power / factorial;

        if (i % 2 == 1)
        {
            sum = sum + term;
        }
        else
        {
            sum = sum - term;
        }
    }

    printf("Sum of the series = %.4lf\n", sum);

    return 0;
}