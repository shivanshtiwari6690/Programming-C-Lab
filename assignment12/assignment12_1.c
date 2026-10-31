#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
};

int main() {
    float total = 0.0f, average;
    char grade;
    struct Student s;
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter marks in three subjects:\n");

     for (int i = 0; i < 3; i++) {
        scanf("%f", &s.marks[i]);
        total = total + s.marks[i];
     }
     average = total / 3.0f;
    if (average >= 90)
        printf("grade = A\n");
    else if (average >= 75)
        printf("grade = B\n");
    else if (average >= 60)
        printf("grade = C\n");
    else if (average >= 40)
        printf("grade = D\n");
    else
        printf("grade = F\n");

    return 0;
}
