#include <stdio.h>

int main()
{
    char str[100];
    int l = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[l] != '\0' && str[l] != '\n')
    {
        l++;
    }

    printf("Length of the string = %d", l);

    return 0;
}
