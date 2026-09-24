#include<stdio.h>
int main(){
    int i;
    const i=6;/*Using constant keyword the Computer memory can't replace the value of i*/
    i=10;
    printf("%d",i);
    return 0;
}