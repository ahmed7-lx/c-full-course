#include <stdio.h>

int main() {
    int f=1,i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        f = f*i;
        i++;
    }
    printf("Factorial=%d",f);
return 0;    
}   
