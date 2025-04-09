// Your code here...
#include <stdio.h>
#include <string.h>

// Function to check if a substring is a palindrome
int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // It's a palindrome
}

// Function to find the largest palindromic substring
void findLargestPalindrome(char *str) {
    int maxLength = 0;
    int startIdx = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            if (isPalindrome(str, i, j) && (j - i + 1) > maxLength) {
                maxLength = j - i + 1;
                startIdx = i;
            }
        }
    }

    printf("The largest palindromic substring is: ");
    for (int i = startIdx; i < startIdx + maxLength; i++) {
        putchar(str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];


    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    findLargestPalindrome(str);

    return 0;
}