#include <stdio.h>

int main()
{
    int choice, n;
    int original, reverse, remainder;
    int sum, digits, temp, digit, result;
    int i, isPrime;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &n);

                original = n;
                reverse = 0;

                while (n > 0)
                {
                    remainder = n % 10;
                    reverse = reverse * 10 + remainder;
                    n = n / 10;
                }

                if (original == reverse)
                {
                    printf("%d is a palindrome.\n", original);
                }
                else
                {
                    printf("%d is not a palindrome.\n", original);
                }

                break;

            case 2:
                printf("Enter an integer: ");
                scanf("%d", &n);

                original = n;
                temp = n;
                digits = 0;

                while (temp > 0)
                {
                    digits++;
                    temp = temp / 10;
                }

                result = 0;
                temp = n;

                while (temp > 0)
                {
                    digit = temp % 10;

                    int power = 1;

                    for (i = 1; i <= digits; i++)
                    {
                        power = power * digit;
                    }

                    result = result + power;
                    temp = temp / 10;
                }

                if (result == original)
                {
                    printf("%d is an Armstrong number.\n", original);
                }
                else
                {
                    printf("%d is not an Armstrong number.\n", original);
                }

                break;

            case 3:
                printf("Enter an integer: ");
                scanf("%d", &n);

                if (n < 2)
                {
                    isPrime = 0;
                }
                else
                {
                    isPrime = 1;

                    for (i = 2; i < n; i++)
                    {
                        if (n % i == 0)
                        {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime == 1)
                {
                    printf("%d is a prime number.\n", n);
                }
                else
                {
                    printf("%d is not a prime number.\n", n);
                }

                break;

            case 4:
                printf("Enter an integer: ");
                scanf("%d", &n);

                sum = 0;
                temp = n;

                while (temp != 0)
                {
                    digit = temp % 10;
                    sum = sum + digit;
                    temp = temp / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;

            case 5:
                printf("Enter an integer: ");
                scanf("%d", &n);

                if (n == 0)
                {
                    digits = 1;
                }
                else
                {
                    digits = 0;
                    temp = n;

                    while (temp != 0)
                    {
                        digits++;
                        temp = temp / 10;
                    }
                }

                printf("Number of digits = %d\n", digits);

                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}