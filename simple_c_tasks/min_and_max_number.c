#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    int min = INT_MAX;
    int max = INT_MIN;

    printf("Enter the length of the array: ");
    scanf("%d", &N);

    int numbers[N];
    printf("Enter %d numbers in the array: \n", N);

    for (i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < N; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }

        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("MAX number: %d\n", max);
    printf("MIN number: %d\n", min);

    return 0;
}
