// Your code here...
#include <stdio.h>
#include <math.h>

int rightShift(int n) {
    int lastDigit = n % 10;

    // Remove the last digit
    int remaining = n / 10;

    // Count the number of digits in the remaining part
    int digits = (remaining == 0) ? 0 : (int)log10(remaining) + 1;

    // Multiply the last digit by 10^digits and add the remaining
    int shifted = lastDigit * pow(10, digits) + remaining;

    return shifted;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int shifted = rightShift(n);

    if (shifted == n)
        printf("%d\n", n);
    else
        printf("%d\n", shifted);

    return 0;
}
