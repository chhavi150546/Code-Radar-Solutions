#include <stdio.h>

char* welcome(float number) {
    static char message[50];
    sprintf(message, "You entered:%.2f, number");
    return message;
}

int main() {
    float number;
    scanf("%f", &number);
    printf("%s", welcome(number));
    return 0;
}