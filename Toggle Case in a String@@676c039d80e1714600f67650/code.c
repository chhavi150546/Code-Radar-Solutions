// Your code here...
#include <stdio.h>
#include <string.h>

void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {  // Check if the character is lowercase
            str[i] = toupper(str[i]);  // Convert to uppercase
        } else if (isupper(str[i])) { // Check if the character is uppercase
            str[i] = tolower(str[i]);  // Convert to lowercase
        }
    }
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    

    toggleCase(str);

    printf("%s\n", str);

    return 0;
}