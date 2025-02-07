#include <stdio.h>

int main() {
    double a, b;
    double result; // result should be double for arithmetic operations
    char str;

    scanf("%lf %lf %c", &a, &b, &str);

    if (str == '+') {
        result = a + b;
        printf("%.2f", result); // print result as double
    } else if (str == '-') {
        result = a - b;
        printf("%.2f", result);
    } else if (str == '/') {
        if (b == 0) {
            printf("error"); // check for division by zero
        } else {
            result = a / b;
            printf("%.2f", result);
        }
    } else if (str == '*') {
        result = a * b;
        printf("%.2f", result);
    } else {
        printf("error"); // handle invalid operators
    }

    return 0;
}
