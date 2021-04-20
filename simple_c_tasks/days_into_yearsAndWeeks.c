#include <stdio.h>
#include <stdlib.h>

void main() {

    int days, years, weeks;

    printf("Enter the number of days to convert to years and weeks: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;

    printf("Years:  %d\n", years);
    printf("Weeks: %d\n", weeks);

}
