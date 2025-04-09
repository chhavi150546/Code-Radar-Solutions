// Your code here...
#include <stdio.h>
#include <string.h>

void compressString(const char *input, char *output) {
    int len = strlen(input);
    int outIndex = 0;

    for (int i = 0; i < len; ) {
        char currentChar = input[i];
        int count = 1;

        // Count consecutive characters
        while (i + count < len && input[i + count] == currentChar) {
            count++;
        }

        // Add character to output
        output[outIndex++] = currentChar;

        // Add count to output
        outIndex += sprintf(&output[outIndex], "%d", count);

        i += count;
    }

    output[outIndex] = '\0'; // Null-terminate output

    // If compressed string is not shorter, copy original
    if (strlen(output) >= len) {
        strcpy(output, input);
    }
}

int main() {
    char str[100], result[200];
    printf("Enter a string: ");
    scanf("%s", str);

    compressString(str, result);
    printf("Compressed string: %s\n", result);

    return 0;
}
