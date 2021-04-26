#include <stdio.h>
#include <stdlib.h>

void main() {

    int i;
    int N;
    int sum;

    printf("Enter the length of the array: ");
    scanf("%d", &N);

    int numbers[N];

    printf("Enter the %d numbers in the array: \n", N);

    for (i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < N; i++) {
        sum += numbers[i];
    }

    printf("Avarage value of array: %.2f", (float) sum / N);
}
