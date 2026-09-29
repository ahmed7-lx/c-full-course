#include<stdio.h>
int main(){
    int a,b;
    a=1;
    b=1;
    a++;//unary operator(post-increment)
    a--;//psot-decrement
    printf("%d\n",a);
    ++b;//pre-increment
    --b;//post-increment
    printf("%d",b);
    return 0;
}