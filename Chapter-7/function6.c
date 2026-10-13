#include <stdio.h>
int reverse(int num)
{
    int rev = 0;
    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}
int main()
{
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev = reverse(num);
    printf("Reversed number = %d", rev);
    return 0;
}