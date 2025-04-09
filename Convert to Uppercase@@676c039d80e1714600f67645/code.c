// Your code here...
#include <stdio.h>

void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

int main() {
    char str[100];

   
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

  

    toUpperCase(str);

    printf("%s\n", str);

    return 0;
}