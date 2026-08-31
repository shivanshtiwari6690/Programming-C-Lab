#include <stdio.h>

int main()
{
    int marks = 80;
    float percentage;
    const int subjects = 5;
    char grade;

    percentage = (float)marks / subjects;

    if (percentage >= 75)
    {
        grade = 'A';
    }
    else
    {
        grade = 'B';
    }

    printf("Marks = %d\n", marks);
    printf("Subjects = %d\n", subjects);
    printf("Percentage = %.2f\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}