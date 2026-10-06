#include<stdio.h>
int factorial(int n);
int factorial(int n)
{
    int fact=1,i;
    for(i =1;i<=n;i++){
    fact = fact* i;

    }
    return fact;
}
int main()
{
    int i,fa;
    printf("Enter a number:");
    scanf("%d",&i);
    fa = factorial(i);
    printf("Factorial=%d",fa);
    return 0;
}