#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length, i;
    char temp;

    // Calculating the length of the string
    length = strlen(str);

    // Swapping characters from the start and the end of the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str[100];

    // Taking input from the user

    gets(str);

    // Reversing the string
    reverseString(str);

    // Printing the reversed string
    printf("%s\n", str);

    return 0;
}
