#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}

