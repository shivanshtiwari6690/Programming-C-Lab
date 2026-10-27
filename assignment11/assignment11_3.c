#include <stdio.h>

void display()
{
    auto int a = 0;
    static int s = 0;
    printf("automatic = %d, static = %d\n", a, s);
    a++;
    s++;
}
int main()
{
    display();
    display();
    display();
    return 0;
}