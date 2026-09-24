#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st value:");
    scanf("%d",&a);
    printf("Enter 2nd value:");
    scanf("%d",&b);
     printf("Logical AND (a && b) = %d\n", a && b);
    printf("Logical OR  (a || b) = %d\n", a || b);
    printf("Logical NOT (!a) = %d\n", !a);
    printf("Logical NOT (!b) = %d\n", !b);

    return 0;
}