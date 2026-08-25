#include <stdio.h>
int main() {
    int a;
    float b, c1, c2;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a floating-point number: ");
    scanf("%f", &b);

    c1 = a + b; // Implicit type conversion
    c2 = (float)a + b; // Explicit type conversion
    printf("\nImplicit Type Conversion\n");
    printf("Addition = %.2f\n", c1);
    printf("\nExplicit Type Conversion\n");
    printf("Addition = %.2f\n", c2);

    c1 = a - b; // Implicit type conversion
    c2 = (float)a - b; // Explicit type conversion
    printf("\nImplicit Type Conversion\n");
    printf("Subtraction = %.2f\n", c1);
    printf("\nExplicit Type Conversion\n");
    printf("Subtraction = %.2f\n", c2);

    c1 = a * b; // Implicit type conversion 
    c2 = (float)a * b; // Explicit type conversion
    printf("\nImplicit Type Conversion\n");
    printf("Multiplication = %.2f\n", c1);
    printf("\nExplicit Type Conversion\n");
    printf("Multiplication = %.2f\n", c2);

    c1 = a / b; // Implicit type conversion
    c2 = (float)a / b; // Explicit type conversion
    printf("\nImplicit Type Conversion\n");
    printf("Division = %.2f\n", c1);
    printf("\nExplicit Type Conversion\n");
    printf("Division = %.2f\n", c2);

    return 0;
}