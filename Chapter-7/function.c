#include<stdio.h>
int square(int a);
int square(int a)
{
    int z;
    z = a*a;
    return z;
}
int main()
{
    int x,z;
    printf("Enter a number:");
    scanf("%d",&x);
    z = square(x);
    printf("Square=%d",z);
    return 0;
}