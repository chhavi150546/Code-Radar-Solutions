#include <stdio.h>

char* welcome() {
    return "You entered:";
}

int main() {
    float number;
    scanf("%f", &number);
    printf("%s %.2f\n", welcome(), number);
    return 0;
}