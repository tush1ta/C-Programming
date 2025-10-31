#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {        // Outer loop for rows
        for (j = 1; j <= i; j++) {    // Inner loop for columns
            printf("*");
        }
        printf("\n");                 // Move to the next line
    }
    return 0;
}

