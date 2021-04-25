#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum = 0;
    int product = 1;
    int numbers[5];

    printf("Enter 5 numbers: \n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    //results:
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
