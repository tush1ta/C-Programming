#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 2, denominator = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;        // numerator: 2, 4, 6, 8...
        denominator += 4;      // denominator: 3, 7, 11, 15...
    }

    printf("Approximate sum: %.2lf\n", sum);

    return 0;
}

