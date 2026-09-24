#include<Stdio.h>

int main(){
    int a,b,c,d,e,sum;
    float avg;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    printf("Enter 3rd number:");
    scanf("%d",&c);
    printf("Enter 4th number:");
    scanf("%d",&d);
    printf("Enter 5th number:");
    scanf("%d",&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    printf("The sum of 5 numbers:%d\n",sum);
    printf("The average of 5 numbers:%f",avg);
    return 0;
}