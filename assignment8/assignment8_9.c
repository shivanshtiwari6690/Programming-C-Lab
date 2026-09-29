#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[50], *position;

    printf("Enter a sentence: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter a word: ");
    fgets(str2, sizeof(str2), stdin);

    str2[strcspn(str2, "\n")] = '\0';

    position = strstr(str1, str2);

    if (position != NULL)
        printf("Substring starts at position %ld",
               (long)(position - str1 + 1));
    else
        printf("Substring not found");

    return 0;
}