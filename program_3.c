#include <stdio.h>

void main()
{
    int n,i,count;

    printf("Enter a number: ");
    scanf("%d", &n);

    // if n is even, reduce the count by 1
    if (n % 2 == 0)
        count = n - 1;
    else
        count = n;

    printf("Output: ");
    for (i = 0; i < count; i++) {
        printf("%d", 2 * i + 1);
        if (i < count-1) {
            printf(", ");
        }
    }

    printf("\n");
}