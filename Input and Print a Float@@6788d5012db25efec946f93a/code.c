#include <stdio.h>

char* welcome() {
    return "You entered:";
}

int main() {
    float number;
    scanf("%f", &number);
    printf("%s", welcome(), number);
    return 0;
}