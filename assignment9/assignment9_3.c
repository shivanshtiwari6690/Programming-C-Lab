#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int countDigits(int n)
{
    int count = 0;

    if (n < 0)
        n = -n;

    if (n == 0)
        return 1;

    while (n > 0)
    {
        count++;
        n /= 10;
    }

    return count;
}

int reverseNumber(int n)
{
    int reverse = 0, digit;
    int sign = 1;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    return sign * reverse;
}

int isPalindrome(int n)
{
    if (n < 0)
        return 0;

    return n == reverseNumber(n);
}

int main()
{
    int n, reverse;

    printf("Enter an integer: ");
    scanf("%d", &n);

    reverse = reverseNumber(n);

    printf("Sum of digits = %d\n", sumOfDigits(n));
    printf("Number of digits = %d\n", countDigits(n));
    printf("Reverse = %d\n", reverse);

    if (isPalindrome(n))
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");

    return 0;
}