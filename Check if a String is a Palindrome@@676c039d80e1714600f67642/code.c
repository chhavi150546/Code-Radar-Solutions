#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}

int main() {
    char str[100];

  
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = 0;

    if (isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}