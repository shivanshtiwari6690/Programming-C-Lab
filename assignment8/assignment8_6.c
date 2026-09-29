#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int result;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    printf("Length of first string = %zu\n", strlen(s1));
    printf("Length of second string = %zu\n", strlen(s2));

    result = strcmp(s1, s2);

    if (result == 0)
        printf("Both strings are equal");
    else if (result < 0)
        printf("%s comes first lexicographically", s1);
    else
        printf("%s comes first lexicographically", s2);

    return 0;
}