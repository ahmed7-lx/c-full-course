#include<stdio.h>
int pallindrome(int num)
{
    int rev = 0, original = num;
    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (original == rev)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}
int main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = pallindrome(num);
    if (result)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);
    return 0;
}