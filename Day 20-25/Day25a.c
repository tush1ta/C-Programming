#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    // note the leading space before %c to skip whitespace/newline
    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        // try with a space to skip leftover newline
        scanf("%d %d %c", &a, &b, &op);
    }

    switch(op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/':
            if (b != 0) printf("%d\n", a / b);
            else printf("Division by zero error\n");
            break;
        case '%':
            if (b != 0) printf("%d\n", a % b);
            else printf("Modulo by zero error\n");
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}


