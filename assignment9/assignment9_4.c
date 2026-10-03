#include <stdio.h>

int gcd(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int gcdThree(int a, int b, int c)
{
    return gcd(gcd(a, b), c);
}

int lcmThree(int a, int b, int c)
{
    return lcm(lcm(a, b), c);
}

int main()
{
    int a, b, c;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Please enter positive integers only.\n");
    }
    else
    {
        printf("GCD = %d\n", gcdThree(a, b, c));
        printf("LCM = %d\n", lcmThree(a, b, c));
    }

    return 0;
}