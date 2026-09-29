#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], str[101];

    printf("Enter first name: ");
    scanf("%49s", str1);

    printf("Enter last name: ");
    scanf("%49s", str2);

    strcpy(str, str1);
    strcat(str, " ");
    strcat(str, str2);

    printf("Complete name: %s", str);

    return 0;
}