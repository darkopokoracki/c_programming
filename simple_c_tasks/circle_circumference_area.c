#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265

void main() {

    int r;

    printf("enter the radius of the circle: ");
    scanf("%d", &r);

    printf("Circumference of a circle: %.2f\n", 2 * r * PI);
    printf("Circle area: %.2f\n", r * r * PI);
}
