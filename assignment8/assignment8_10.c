#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], *p;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    p = strtok(str, " \t");

    printf("Words in the sentence:\n");

    while (p != NULL)
    {
        printf("%s\n", p);
        count++;
        p = strtok(NULL, " \t");
    }

    printf("Total number of words = %d", count);

    return 0;
}