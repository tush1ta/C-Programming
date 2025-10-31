#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1; // use long long to handle large results

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%lld\n", fact);

    return 0;
}