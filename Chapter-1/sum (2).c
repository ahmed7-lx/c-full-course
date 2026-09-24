#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum = %d\n", sum);

    return 0;
}