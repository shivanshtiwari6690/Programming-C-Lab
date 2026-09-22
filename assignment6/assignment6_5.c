#include <stdio.h>

int main()
{
    int lower, upper;
    int i, j, isPrime;
    int count = 0;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; i++)
    {
        if (i < 2)
        {
            continue;
        }

        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal number of prime numbers = %d\n", count);

    return 0;
}