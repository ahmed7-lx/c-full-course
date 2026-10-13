#include<stdio.h>
int condition(int a)
{
    if(a % 2==0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    return 0;
    }
}
int main()
{
    int a,s;
    printf("Enter a number:");
    scanf("%d", &a);
    condition(a);
    return 0;
}