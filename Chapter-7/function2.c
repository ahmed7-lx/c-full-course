#include<stdio.h>
int cube(int a);
int cube(int a){
    int z;
     z = a * a * a;
    return z;
}
int main()
{
    int a,z;
    printf("Enter a number:");
    scanf("%d",&a);
    z = cube(a);
    printf("Cube=%d",z);
    return 0;
}