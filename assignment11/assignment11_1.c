#include <stdio.h>
void display()
{
    auto int x = 25;
    printf("outside inner block: %d\n", x);

    {
        auto int x = 10;
        printf("inside inner block: %d\n", x);
    }
    printf("after inner block: %d\n", x);
}
int main()
{
    display();
    return 0;
}
