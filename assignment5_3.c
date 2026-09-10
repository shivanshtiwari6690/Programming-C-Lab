#include <stdio.h>
int main()
{
    float w, h, bmi;

    printf("Enter weight in kg: ");
    scanf ("%f", &w);

    printf("Enter height in meters: ");
    scanf ("%f", &h);

    if (w <= 0)
    {
        printf("Invalid weight.\n");
    }
    else if (h <= 0)
    {
        printf("Invalid height.\n");
    }
    else
    {
        bmi = w / (h * h);
        printf("BMI = %.2f\n", bmi);

        if (bmi < 18.5)
        {
            printf("Underweight\n");
        }
        else if (bmi >= 18.5 && bmi < 25)
        {
            printf("Normal weight\n");
        }
        else if (bmi >= 25 && bmi < 30)
        {
            printf("Overweight\n");
        }
        else
        {
            printf("Obesity\n");
        }
    }
    return 0;
}