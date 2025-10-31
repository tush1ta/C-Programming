#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;            // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num /= 10;                       // remove last digit
    }

    if (reversed == original) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
