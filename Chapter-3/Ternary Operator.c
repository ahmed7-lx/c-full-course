#include <stdio.h>

int main()
{
    /*
     * PROGRAM: Perform Conditional (Ternary) Operator
     *
     * The conditional operator is also called the
     * ternary operator because it works with three operands.
     *
     * Syntax:
     *
     *      condition ? expression1 : expression2;
     *
     * If the condition is TRUE (non-zero),
     * expression1 is executed.
     *
     * If the condition is FALSE (zero),
     * expression2 is executed.
     *
     * Example:
     *
     *      result = (a > b) ? a : b;
     *
     * If a is greater than b, result gets the value of a.
     * Otherwise, result gets the value of b.
     */

    int a, b, result;

    // Taking two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);


    /*
     * CONDITIONAL OPERATOR
     * --------------------
     *
     * Here we compare a and b.
     *
     * (a > b) is the condition.
     *
     * If a > b is TRUE:
     *      result = a
     *
     * If a > b is FALSE:
     *      result = b
     */

    result = (a > b) ? a : b;


    // Displaying the largest number
    printf("\n========== RESULT ==========\n");
    printf("First number  = %d\n", a);
    printf("Second number = %d\n", b);
    printf("Largest number = %d\n", result);


    /*
     * Another example:
     *
     * We can use the conditional operator to check
     * whether a number is even or odd.
     *
     * If a % 2 == 0, the number is EVEN.
     * Otherwise, it is ODD.
     */

    printf("\n========== EVEN OR ODD ==========\n");

    printf("%d is %s\n", a,
           (a % 2 == 0) ? "Even" : "Odd");

    printf("%d is %s\n", b,
           (b % 2 == 0) ? "Even" : "Odd");


    /*
     * END OF PROGRAM
     *
     * return 0 means that the program has executed
     * successfully.
     */

    return 0;
}
