#include <stdio.h>

int main() {
    char operator;
    double a, b, result;

    // Prompt user to enter an operator (+, -, *, /)
    scanf("%c", &operator);

    // Prompt user to enter two operands
    scanf("%lf %lf", &a, &b);

    switch (operator) {
        case '+':
            result = a + b;
            printf("%.2lf + %.2lf = %.2lf", first, second, result);
            break;
        case '-':
            result = first - second;
            printf("%.2lf - %.2lf = %.2lf", first, second, result);
            break;
        case '*':
            result = first * second;
            printf("%.2lf * %.2lf = %.2lf", first, second, result);
            break;
        case '/':
            // Check if the divisor is zero
            if (second != 0) {
                result = first / second;
                printf("%.2lf / %.2lf = %.2lf", first, second, result);
            } else {
                printf("Error!");
            }
            break;
        default:
            // Handle invalid operator input
            printf("Error");
    }

    return 0;
}
