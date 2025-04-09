// Your code here...
#include <stdio.h>
#include <string.h>

void findLongestWord(char *str, char *longestWord) {
    char currentWord[100];
    int maxLength = 0, currentLength = 0;
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            currentWord[j++] = str[i];
            currentLength++;
        } else {
            currentWord[j] = '\0'; // Null-terminate the current word
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strcpy(longestWord, currentWord); // Copy current word to longestWord
            }
            j = 0;
            currentLength = 0;
        }
        i++;
    }

    // Check the last word in case it's the longest
    currentWord[j] = '\0';
    if (currentLength > maxLength) {
        strcpy(longestWord, currentWord);
    }
}

int main() {
    char str[100], longestWord[100];

 
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    findLongestWord(str, longestWord);

    printf("%s\n", longestWord);

    return 0;
}