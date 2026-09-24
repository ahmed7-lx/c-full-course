#include <stdio.h>
int main()
{
    int a = 10;
    printf("Initial value of a = %d\n", a);
    // Simple assignment
    a = 20;
    printf("a = 20       : %d\n", a);
    // Addition assignment
    a += 5;
    printf("a += 5       : %d\n", a);
    // Subtraction assignment
    a -= 3;
    printf("a -= 3       : %d\n", a);
    // Multiplication assignment
    a *= 2;
    printf("a *= 2       : %d\n", a);
    // Division assignment
    a /= 4;
    printf("a /= 4       : %d\n", a);
    // Modulus assignment
    a %= 3;
    printf("a %%= 3       : %d\n", a);
    // Left shift assignment
    a <<= 2;
    printf("a <<= 2      : %d\n", a);
    // Right shift assignment
    a >>= 1;
    printf("a >>= 1      : %d\n", a);
    // Bitwise AND assignment
    a &= 3;
    printf("a &= 3       : %d\n", a);
    // Bitwise OR assignment
    a |= 4;
    printf("a |= 4       : %d\n", a);
    // Bitwise XOR assignment
    a ^= 2;
    printf("a ^= 2       : %d\n", a);
    return 0;
}
