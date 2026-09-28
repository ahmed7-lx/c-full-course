#include <stdio.h>

int main() {
    int digit, n, rev = 0, m;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;

    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (m == rev) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}