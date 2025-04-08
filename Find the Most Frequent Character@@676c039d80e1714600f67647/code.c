// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

char mostFrequentChar(char *str) {
    int freq[MAX_CHAR] = {0}; // Array to store frequency of each character
    char result = '\0';       // Character with maximum frequency
    int maxFreq = 0;          // Maximum frequency

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++; // Increment frequency of current character
    }

    for (int i = 0; i < MAX_CHAR; i++) {
        if (freq[i] > maxFreq || (freq[i] == maxFreq && i < result)) {
            maxFreq = freq[i];
            result = i; // Update result to the current character
        }
    }
    return result;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char result = mostFrequentChar(str);
    printf("The most frequent character is '%c'\n", result);

    return 0;
}