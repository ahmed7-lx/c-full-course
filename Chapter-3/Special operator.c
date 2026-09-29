#include <stdio.h>

int main()
{
    /*
     * PROGRAM: Perform Special Operators in C
     *
     * Special operators are used for specific purposes
     * in a C program.
     *
     * Some important special operators are:
     *
     * 1. sizeof     -> Finds the size of a data type/variable
     * 2. &          -> Address-of operator
     * 3. *          -> Pointer/Dereference operator
     * 4. ,          -> Comma operator
     * 5. .          -> Structure member operator
     * 6. ->         -> Structure pointer member operator
     * 7. []         -> Array subscript operator
     * 8. ()         -> Function call operator
     */

    int a = 10;
    int b = 20;

    printf("========== SPECIAL OPERATORS IN C ==========\n");


    /*
     * 1. sizeof OPERATOR
     * ------------------
     *
     * The sizeof operator is used to find the amount
     * of memory occupied by a variable or data type.
     *
     * Syntax:
     *      sizeof(variable);
     *      sizeof(data_type);
     *
     * Example:
     *      sizeof(a)
     *      sizeof(int)
     *
     * The result is measured in bytes.
     */

    printf("\n1. sizeof Operator");
    printf("\nSize of integer a = %zu bytes", sizeof(a));
    printf("\nSize of int data type = %zu bytes\n", sizeof(int));


    /*
     * 2. ADDRESS-OF OPERATOR (&)
     * --------------------------
     *
     * The & operator gives the memory address of
     * a variable.
     *
     * Example:
     *
     *      &a
     *
     * means "address of a".
     *
     * The address is normally displayed using %p.
     */

    printf("\n2. Address-of Operator (&)");
    printf("\nValue of a = %d", a);
    printf("\nAddress of a = %p\n", (void *)&a);


    /*
     * 3. DEREFERENCE OPERATOR (*)
     * ----------------------------
     *
     * The * operator is used with a pointer to access
     * the value stored at the address held by the pointer.
     *
     * Here:
     *
     *      int *p;
     *
     * declares p as a pointer to an integer.
     *
     *      p = &a;
     *
     * stores the address of a in p.
     *
     *      *p
     *
     * gives the value stored at that address.
     */

    int *p = &a;

    printf("\n3. Dereference Operator (*)");
    printf("\nAddress stored in p = %p", (void *)p);
    printf("\nValue pointed to by p = %d\n", *p);


    /*
     * 4. COMMA OPERATOR (,)
     * ---------------------
     *
     * The comma operator allows multiple expressions
     * to be written in a single statement.
     *
     * The expressions are evaluated from left to right,
     * and the value of the last expression is returned.
     *
     * Example:
     *
     *      result = (a = 5, b = 10, a + b);
     *
     * First a becomes 5,
     * then b becomes 10,
     * then a + b is calculated.
     */

    int result;

    result = (a = 5, b = 10, a + b);

    printf("\n4. Comma Operator (,)");
    printf("\na = %d", a);
    printf("\nb = %d", b);
    printf("\nResult = %d\n", result);


    /*
     * 5. ARRAY SUBSCRIPT OPERATOR ([])
     * --------------------------------
     *
     * The [] operator is used to access elements
     * of an array.
     *
     * Array indexing starts from 0.
     *
     * Example:
     *
     *      marks[0] -> first element
     *      marks[1] -> second element
     *      marks[2] -> third element
     */

    int marks[3] = {80, 85, 90};

    printf("\n5. Array Subscript Operator ([])");
    printf("\nFirst element  = %d", marks[0]);
    printf("\nSecond element = %d", marks[1]);
    printf("\nThird element  = %d\n", marks[2]);


    /*
     * 6. DOT OPERATOR (.)
     * -------------------
     *
     * The . operator is used to access a member
     * of a structure using a structure variable.
     *
     * Example:
     *
     *      student.age
     *
     * accesses the age member of the student structure.
     */

    struct Student
    {
        char name[20];
        int age;
    };

    struct Student student = {"Rahul", 20};

    printf("\n6. Dot Operator (.)");
    printf("\nStudent Name = %s", student.name);
    printf("\nStudent Age  = %d\n", student.age);


    /*
     * 7. ARROW OPERATOR (->)
     * ----------------------
     *
     * The -> operator is used to access a structure
     * member through a pointer to the structure.
     *
     * Example:
     *
     *      struct Student *ptr;
     *      ptr = &student;
     *
     *      ptr->age
     *
     * accesses the age member through the pointer.
     */

    struct Student *ptr = &student;

    printf("\n7. Arrow Operator (->)");
    printf("\nStudent Name = %s", ptr->name);
    printf("\nStudent Age  = %d\n", ptr->age);


    /*
     * 8. FUNCTION CALL OPERATOR ()
     * ----------------------------
     *
     * Parentheses () are used to call a function.
     *
     * Example:
     *
     *      printf()
     *
     * calls the printf function.
     *
     * We can also create our own function and call it.
     */

    printf("\n8. Function Call Operator ()");
    printf("\nThe printf() function is being called here.\n");


    /*
     * END OF PROGRAM
     *
     * return 0 indicates that the program has
     * executed successfully.
     */

    return 0;
}
