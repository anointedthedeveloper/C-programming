#include <stdio.h>
#define PI 3.14159
int main() {
float radius, area, perimeter;
printf("Enter radius: ");
scanf("%f", &radius);
area = PI * radius * radius;
perimeter = 2 * PI * radius;
printf("Area: %.2f\nPerimeter: %.2f\n", area, perimeter);
return 0;
}