#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
