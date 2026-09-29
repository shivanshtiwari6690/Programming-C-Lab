#include <stdio.h>

int main()
{
    char str[100];
    char lC, rC;
    int length = 0, l, r, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    l = 0;
    r = length - 1;

    while (l < r)
    {
        lC = str[l];
        rC = str[r];

        if (lC >= 'A' && lC <= 'Z')
        {
            lC = lC + 32;
        }

        if (rC >= 'A' && rC <= 'Z')
        {
            rC = rC + 32;
        }

        if (lC != rC)
        {
            isPalindrome = 0;
            break;
        }

        l++;
        r--;
    }

    if (isPalindrome == 1)
    {
        printf("The string is a palindrome.");
    }
    else
    {
        printf("The string is not a palindrome.");
    }

    return 0;
}
