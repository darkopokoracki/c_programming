#include <stdio.h>
#include <stdlib.h>

int main()
{
	  int f1 = 0;
	  int f2 = 1;
	  int i, N, f3;

    printf("Enter number N: ");
	  scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("%d ", f1);
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

	return 0;
}
