#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    int a, b;
    float x, y;

    do
    {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("Result = %.2f\n", x + y);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("Result = %.2f\n", x - y);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("Result = %.2f\n", x * y);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);

                if (y == 0)
                {
                    printf("Division by zero is not allowed.\n");
                }
                else
                {
                    printf("Result = %.2f\n", x / y);
                }
                break;

            case 5:
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);

                if (b == 0)
                {
                    printf("Modulus by zero is not allowed.\n");
                }
                else
                {
                    printf("Result = %d\n", a % b);
                }
                break;

            case 6:
                printf("Enter base and exponent: ");
                scanf("%f %f", &x, &y);
                printf("Result = %.2f\n", pow(x, y));
                break;

            case 7:
                printf("Exiting calculator...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 7);

    return 0;
}