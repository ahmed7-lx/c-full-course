#include <stdio.h>

int main()
{
    /*
     * PROGRAM: Perform All Bitwise Operators in C
     *
     * Bitwise operators work on the individual bits
     * of an integer.
     *
     * The main bitwise operators in C are:
     *
     * 1. &   Bitwise AND
     * 2. |   Bitwise OR
     * 3. ^   Bitwise XOR
     * 4. ~   Bitwise NOT
     * 5. <<  Left Shift
     * 6. >>  Right Shift
     */

    int a, b;

    // Taking two integer values from the user
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("\n========== BITWISE OPERATIONS ==========\n");


    /*
     * 1. BITWISE AND (&)
     *
     * The AND operator compares corresponding bits
     * of two numbers.
     *
     * Truth table:
     *
     *   A   B   A & B
     *   0   0     0
     *   0   1     0
     *   1   0     0
     *   1   1     1
     *
     * Example:
     *
     * a = 5  -> 0101
     * b = 3  -> 0011
     *          ----
     * a & b  -> 0001 = 1
     */

    printf("\n1. Bitwise AND");
    printf("\n   a & b = %d\n", a & b);


    /*
     * 2. BITWISE OR (|)
     *
     * The OR operator returns 1 if at least one
     * corresponding bit is 1.
     *
     * Truth table:
     *
     *   A   B   A | B
     *   0   0     0
     *   0   1     1
     *   1   0     1
     *   1   1     1
     *
     * Example:
     *
     * a = 5  -> 0101
     * b = 3  -> 0011
     *          ----
     * a | b  -> 0111 = 7
     */

    printf("\n2. Bitwise OR");
    printf("\n   a | b = %d\n", a | b);


    /*
     * 3. BITWISE XOR (^)
     *
     * XOR means Exclusive OR.
     * It returns 1 when the corresponding bits
     * are different.
     *
     * Truth table:
     *
     *   A   B   A ^ B
     *   0   0     0
     *   0   1     1
     *   1   0     1
     *   1   1     0
     *
     * Example:
     *
     * a = 5  -> 0101
     * b = 3  -> 0011
     *          ----
     * a ^ b  -> 0110 = 6
     */

    printf("\n3. Bitwise XOR");
    printf("\n   a ^ b = %d\n", a ^ b);


    /*
     * 4. BITWISE NOT (~)
     *
     * The NOT operator works on only one operand.
     * It changes every bit:
     *
     * 0 becomes 1
     * 1 becomes 0
     *
     * Example:
     *
     * a = 5
     * Binary:  00000101
     * NOT:     11111010
     *
     * In a signed integer, this gives -6
     * because C commonly represents signed integers
     * using two's complement.
     */

    printf("\n4. Bitwise NOT");
    printf("\n   ~a = %d\n", ~a);


    /*
     * 5. LEFT SHIFT (<<)
     *
     * The left-shift operator moves all bits toward
     * the left by the specified number of positions.
     *
     * Example:
     *
     * a = 5
     * Binary: 0101
     *
     * a << 1
     *         1010 = 10
     *
     * For a positive integer, shifting left by one
     * position generally multiplies the value by 2.
     */

    printf("\n5. Left Shift");
    printf("\n   a << 1 = %d\n", a << 1);


    /*
     * 6. RIGHT SHIFT (>>)
     *
     * The right-shift operator moves all bits toward
     * the right by the specified number of positions.
     *
     * Example:
     *
     * a = 5
     * Binary: 0101
     *
     * a >> 1
     *         0010 = 2
     *
     * For a positive integer, shifting right by one
     * position generally divides the value by 2.
     */

    printf("\n6. Right Shift");
    printf("\n   a >> 1 = %d\n", a >> 1);


    /*
     * PROGRAM END
     *
     * return 0 means that the program has completed
     * successfully.
     */

    return 0;
}