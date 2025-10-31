#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;                // Extract last digit
    digits = (int)log10(num);       // Count number of digits - 1
    first = num / pow(10, digits);  // Extract first digit

    // If the number has only one digit, no need to swap
    if (num < 10) {
        printf("%d\n", num);
        return 0;
    }

    // Remove first and last digit, then swap and rebuild number
    swapped = last * pow(10, digits) + (num % (int)pow(10, digits) / 10) * 10 + first;

    printf("%d\n", swapped);

    return 0;
}

