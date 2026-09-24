#include <stdio.h>

int main() {
    int side,area,perimeter;
    printf("Enter side of square:");
    scanf("%d",&side);
    area=side*side;
    perimeter=4*side;
    printf("Area of square=%d\n",area);
    printf("Perimeter of sqaure=%d",perimeter);
    return 0;
}