#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a); // 'a' now holds the HCF (GCD)

    return 0;
}
