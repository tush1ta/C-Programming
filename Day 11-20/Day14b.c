#include <stdio.h>

int main() {
    int n, i;
    int product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check if there are even numbers in the range
    if (n < 2) {
        printf("No even numbers in this range.\n");
        return 0;
    }

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%d\n", product);

    return 0;
}
