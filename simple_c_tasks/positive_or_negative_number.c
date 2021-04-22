#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Number %d is positive.\n", num);
    } else if (num < 0){
        printf("Number %d is negative.\n", num);
    } else {
        printf("Neutral number");
    }

    return 0;
}
