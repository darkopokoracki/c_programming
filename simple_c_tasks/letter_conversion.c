#include <stdio.h>
#include <stdlib.h>

void main()
{
    char letter;

    printf("Enter the letter: ");
    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z') {
        printf("%c -> %c",letter, letter - 32);

    } else if (letter >= 'A' && letter <= 'Z') {
        printf("%c -> %c", letter, letter + 32);

    } else {
        printf("Wrong entry!");
    }
}
