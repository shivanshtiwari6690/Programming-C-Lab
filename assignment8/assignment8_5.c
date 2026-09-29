#include <stdio.h>

int main()
{
    char str[200];
    int visited[200] = {0}, length = 0, i, j, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    str[length] = '\0';

    for (i = 0; i < length; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("\nFrequency of each character:\n");

    for (i = 0; i < length; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }

        count = 1;

        for (j = i + 1; j < length; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if (str[i] == ' ')
        {
            printf("Space: %d\n", count);
        }
        else if (str[i] == '\t')
        {
            printf("Tab: %d\n", count);
        }
        else
        {
            printf("%c: %d\n", str[i], count);
        }
    }

    return 0;
}