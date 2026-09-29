#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch, *position;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to search: ");
    scanf(" %c", &ch);

    position = strchr(str, ch);

    if (position != NULL)
        printf("First occurrence is at position %ld",
               (long)(position - str + 1));
    else
        printf("Character not found");

    return 0;
}