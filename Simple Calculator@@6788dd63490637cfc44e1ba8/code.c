#include <stdio.h>

int main() {
    char operator;
    double first, second, result;

    // Prompt user to enter an operator (+, -, *, /)

    scanf("%c", &operator);

    // Prompt user to enter two operands
    scanf("%lf %lf", &first, &second);

    switch (operator) {
        case '+':
            result = first + second;
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
                printf("Error! Division by zero.");
            }
            break;

  
    }

    return 0;
}

