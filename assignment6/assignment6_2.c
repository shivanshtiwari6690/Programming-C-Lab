#include <stdio.h>
int main ()
{
    int a = 0, b = 1, c;
    int n;
    
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Fibonacci Sequence : ");

    for (int i = 1; i<= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}