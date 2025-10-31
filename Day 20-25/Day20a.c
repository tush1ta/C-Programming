#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {    
            product *= digit;
            hasOdd = 1;          
        }
        num = num / 10;
    }

    if (!hasOdd)
        product = 1;  

    printf("%d\n", product);

    return 0;
}
