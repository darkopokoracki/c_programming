#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
	float x1, y1, x2, y2, dist;
  
	printf("Input x1: ");
	scanf("%f", &x1);
  
	printf("Input x2: ");
	scanf("%f", &x2);
  
	printf("Input y1: ");
	scanf("%f", &y1);
  
	printf("Input y2: ");
	scanf("%f", &y2);
  
	dist = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	printf("The distance between two points in a plane: %.4f\n", sqrt(dist));

}
