#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    int fact = 1;

    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;

    while (temp > 1) {
        fact *= temp;
        temp--;
    }

    printf("Factorial %d is %d\n", num, fact);

    return 0;
}
