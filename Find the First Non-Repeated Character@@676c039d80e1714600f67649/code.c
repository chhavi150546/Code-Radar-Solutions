// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

char findFirstNonRepeatedChar(char *str) {
    int charCount[MAX_CHAR] = {0};  // Array to store character counts

    // Count frequency of each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        charCount[(unsigned char)str[i]]++;
    }

    // Find the first character with a frequency of 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (charCount[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';  // Return null character if no non-repeated character is found
}

int main() {
    char str[100];

   
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    char result = findFirstNonRepeatedChar(str);

    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("-\n");
    }

    return 0;
}