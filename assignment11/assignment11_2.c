#include <stdio.h>
int x = 100;

int main()
{
    printf("Global variable x = %d\n", x);

    {
        int x = 50;
        printf("Block number = %d\n", x);
    }

    printf("Global variable x = %d\n", x);

    return 0;
}