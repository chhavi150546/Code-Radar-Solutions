#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char *str) {
    int i, len = strlen(str);
    char temp;
    
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    // Using fgets instead of gets

    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character from fgets
    str[strcspn(str, "\n")] = 0; 

    // Reverse the string
    reverseString(str);

    // Print the reversed string
    printf("%s\n", str);

    return 0;
}
