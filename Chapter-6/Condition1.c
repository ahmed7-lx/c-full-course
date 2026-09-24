#include <stdio.h>

int main() 
{
    int n,m;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter another number:");
    scanf("%d",&m);
    if(n < m){
        printf("Smallest=%d",n);
    }
    else{
        printf("Smallest=%d",m);
    }
    return 0;
}