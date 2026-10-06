#include<stdio.h>
int biggest(int a, int b)
{
    if(a > b)
    return a;
    else{
        return b;
    }
}
int main()
{
    int a,b,s;
    printf("Enter a number:");
    scanf("%d" , &a);
    printf("Enter a number:");
    scanf("%d",&b);
    s = biggest(a,b);
    printf("Biggest=%d",s);
    return 0;
}