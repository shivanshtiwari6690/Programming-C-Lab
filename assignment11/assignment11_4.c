#include <stdio.h>

void count()
{
    static int c = 0;

    c++;

    printf("Function called %d times\n", c);
}

int main()
{
    count();
    count();
    count();
    count();

    return 0;
}