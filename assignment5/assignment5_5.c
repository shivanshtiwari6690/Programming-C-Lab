#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000.0;
    float amount;
    float principal, rate, time, interest;

    do
    {
        printf("\n===== BANKING SYSTEM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Calculate Annual Simple Interest\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Current Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid deposit amount.\n");
                }
                else
                {
                    balance = balance + amount;
                    printf("Amount deposited successfully.\n");
                    printf("New Balance = Rs. %.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid withdrawal amount.\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    balance = balance - amount;
                    printf("Amount withdrawn successfully.\n");
                    printf("New Balance = Rs. %.2f\n", balance);
                }
                break;

            case 4:
                printf("Enter principal amount: ");
                scanf("%f", &principal);

                printf("Enter annual interest rate: ");
                scanf("%f", &rate);

                printf("Enter time in years: ");
                scanf("%f", &time);

                if (principal < 0 || rate < 0 || time < 0)
                {
                    printf("Invalid input.\n");
                }
                else
                {
                    interest = (principal * rate * time) / 100;

                    printf("Annual Simple Interest = Rs. %.2f\n", interest);
                }
                break;

            case 5:
                printf("Thank you for using the banking system.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}
