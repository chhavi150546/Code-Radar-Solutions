#include <stdio.h>

void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is lowercase (ASCII: 'a' to 'z')
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting the ASCII difference (32)
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

int main() {
    char str[100];
    int i = 0;

 

    // Read input character by character, stop at newline or end of buffer
    while ((str[i] = getchar()) != '\n' && i < 99) {
        i++;
    }
    str[i] = '\0'; // Null-terminate the string



    toUpperCase(str);

    printf("%s\n", str);

    return 0;
}