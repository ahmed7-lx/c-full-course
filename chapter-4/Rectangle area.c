#include <stdio.h>

int main() {
    int l,b,area,perimeter;
    printf("Enter length of rectangle:");
    scanf("%d",&l);
    printf("Enter breadth of rectangle:");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("Area=%d\n",area);
    printf("Perimeter of ractangle=%d",perimeter);
    return 0;
}