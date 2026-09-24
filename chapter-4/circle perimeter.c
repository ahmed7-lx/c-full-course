#include <stdio.h>

int main() {
  int r,area,perimeter;
    printf("Enter radius of circle:");
    scanf("%d",&r);
    area=3.141*r*r;
    perimeter=2*3.141*r;
    printf("Area=%d\n",area);
    printf("Perimeter of circle=%d",perimeter);
    return 0;
}